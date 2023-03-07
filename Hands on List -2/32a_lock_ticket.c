// Program Number: 32a
// Student Name: Jainav Sanghvi(IMT2020098)
// Description: Write a program to implement semaphore to protect any critical section. 
                //a. rewrite the ticket number creation program using semaphore
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<unistd.h>
#include<sys/sem.h>
#include<sys/types.h>
#include<fcntl.h>

union semun
{
    int val;
    struct semid_ds *buf;
    unsigned short int array;
};

struct db
{
    int ticket_no;
    int train_no;
}ticket;

int main()
{
    union semun arg;
    int key = ftok(".", 'a');
    struct sembuf buf[3] = {{0, -1, 0|SEM_UNDO}, {1, -1, 0|SEM_UNDO}, {2, -1, 0|SEM_UNDO}};
    int semid = semget(key, 3, 0);
    
    int fd = open("database.dat", O_RDWR);
    printf("Enter the train number you want to lock>>:");
    int input; scanf("%d", &input);
    printf("semid: %d\n",semid);
    lseek(fd, sizeof(struct db)*(input-1), SEEK_SET);
    read(fd, &ticket, sizeof(struct db));
    printf("Before Entering Critical Section...\n");
    printf("Current ticket no is: %d\n", ticket.ticket_no);
    
    semop(semid, &buf[input-1], 1);
    printf("Inside the Critical Section\n");
    
    ticket.ticket_no++;
    lseek(fd, -sizeof(struct db), SEEK_CUR);
    write(fd, &ticket, sizeof(struct db));
    printf("Updated ticket no is: %d\n", ticket.ticket_no);
    printf("Enter to Unlock...\n");
    getchar();
    getchar();
    buf[input-1].sem_op = 1;
    semop(semid, &buf[input-1], 1);
    printf("Finished Booking");
    close(fd);
    return 0;
}