// Program Number: 32a
// Student Name: Jainav Sanghvi(IMT2020098)
// Description: Write a program to implement semaphore to protect any critical section. 
                //a. rewrite the ticket number creation program using semaphore
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
#include<sys/types.h>
#include<sys/sem.h>
#include<fcntl.h>

struct db
{
    int ticket_no;
    int train_no;
};

int main()
{
    int fd = open("database.dat", O_RDWR | O_CREAT, 0744);
    struct db train_tickets[3];
    for(int i = 0; i < 3; i++)
    {
        train_tickets[i].ticket_no = 1;
        train_tickets[i].train_no = i+1;
    }
    write(fd, train_tickets, sizeof(train_tickets));
    close(fd);
}