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

union semun
{
    int value;
    struct semid_ds *buffer;
    unsigned short int *array;
};

int main()
{
    int key = ftok(".", 'a');
    int semid = semget(key, 1,0);
    key=ftok(".",'b');
    // int shmid = shmget(key, 1024, IPC_CREAT | 0744);
    // int shmid=shmget(key,0,0);
    // void *data = shmat(shmid, NULL, 0);
    struct sembuf buf = {0, -1, 0 | SEM_UNDO};
    printf("Entering critical section\n");
    semop(semid, &buf, 1);
    printf("locked\n");
    int shmid=shmget(key,0,0);
    void *data = shmat(shmid, 0, 0);
    printf("enter data to be written to shared memory\n");
    scanf("%[^\n]", (char *)data);
    buf.sem_op = 1;
    semop(semid, &buf, 1);
    printf("press entr to release lock\n");
    getchar();
    printf("exiting critical section\n");
    printf("%s\n",(char*)data);
    shmdt(data);
}