// Program Number: 18-read
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
    lock.l_type = F_RDLCK;
    lock.l_whence = SEEK_SET;
    lock.l_start = sizeof(db) * (t - 1);
    lock.l_len = sizeof(db);
    lock.l_pid = getpid();

    printf("Before entrering the critical section..\n");
    fcntl(fd, F_SETLKW, &lock); // locking the file
    printf("Inside the critical section\n");
    printf("Ticket Number %d available\n",db.ticket_no);
    printf("Enter to unlock..\n");
    getchar();
    getchar();
    lock.l_type = F_UNLCK;
    fcntl(fd, F_SETLK, &lock); // unlocking the file
    printf("Finished\n");
}
