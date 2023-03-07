// Program Number: 18-write
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:

//run 18_db.c before running this file
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main()
{
    printf("Select Train Number(1,2,3): ");
    int t;
    scanf("%d", &t);
    struct
    {
        int train_no;
        int ticket_no;
    } db;
    int fd = open("18_db", O_RDWR);
    lseek(fd, sizeof(db) * (t - 1), SEEK_SET);
    read(fd, &db, sizeof(db));

    struct flock lock;
    lock.l_type = F_WRLCK;
    lock.l_whence = SEEK_SET;
    lock.l_start = sizeof(db) * (t - 1);
    lock.l_len = sizeof(db);
    lock.l_pid = getpid();

    printf("Before entrering the critical section..\n");
    fcntl(fd, F_SETLKW, &lock); // locking the file
    printf("Inside the critical section\n");
    printf("Ticket Number %d available\n",db.ticket_no);
    printf("Type 'B' to book the ticket, else press 'Q' to quit:\n");
    getchar();
    char c = getchar();
    if (c == 'B')
    {
        printf("Ticket no %d booked\n", db.ticket_no);
        db.ticket_no++; // updating ticking value
        lseek(fd, -sizeof(db), SEEK_CUR);
        write(fd, &db, sizeof(db)); // updating db
    }
    else if(c=='Q')
    {
        printf("Quiting..\n");
    }else{
        printf("You have entered wrong input\n");
    }
    lock.l_type = F_UNLCK;
    fcntl(fd, F_SETLK, &lock); // unlocking the file
    printf("Finished\n");
}