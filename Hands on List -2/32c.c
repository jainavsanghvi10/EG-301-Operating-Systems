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
{
    int key=ftok(".",'a');
    int semid=semget(key,0,0);
    struct sembuf buf[2]={{0,-1,0|SEM_UNDO},{0,-1,0|SEM_UNDO}};
    printf("Entering critical section 1\n");
    semop(semid,&buf[0],1);
    printf("press enter to unlock\n");
    getchar();
    buf[0].sem_op=1;
    semop(semid,&buf[0],1);
    printf("lock 1 has been unlocked\n");

    printf("Entering critical section 2\n");
    semop(semid,&buf[1],1);
    printf("press enter to unlock\n");
    getchar();
    buf[1].sem_op=1;
    semop(semid,&buf[1],1);
    printf("lock 2 has been unlocked\n");
}