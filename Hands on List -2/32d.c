// Program Number: 32b
// Student Name: Jainav Sanghvi(IMT2020098)
// Description: Write a program to implement semaphore to protect any critical section.
                // d. remove the created semaphore

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
    semctl(semid,1,IPC_RMID);    

}