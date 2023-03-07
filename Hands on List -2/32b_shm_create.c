// Program Number: 32b
// Student Name: Jainav Sanghvi(IMT2020098)
// Description: Write a program to implement semaphore to protect any critical section.
                //b. protect shared memory from concurrent write acces
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <sys/shm.h>
int main()
{
    int key=ftok(".",'b');
    int shmid = shmget(key, 1024, IPC_CREAT | 0744);
}