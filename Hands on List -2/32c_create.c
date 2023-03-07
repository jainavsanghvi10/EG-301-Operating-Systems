// Program Number: 32c
// Student Name: Jainav Sanghvi(IMT2020098)
// Description: Write a program to implement semaphore to protect any critical section.
                // c. protect multiple pseudo resources ( may be two) using counting semaphore
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <sys/shm.h>

union semun
{
    int val;
    struct semid_ds *buf;
    unsigned short int *array;
};

int main()
{int key=ftok(".",'a');
    int semid=semget(key,2,IPC_CREAT|0644);
    union semun arg;
    arg.val=2;
    semctl(semid,0,SETVAL,arg);}