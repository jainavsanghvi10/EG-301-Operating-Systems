// Program Number: 32a
// Student Name: Jainav Sanghvi(IMT2020098)
// Description: Write a program to implement semaphore to protect any critical section. 
                //a. rewrite the ticket number creation program using semaphore
#include<stdio.h>
#include<unistd.h>
#include<errno.h>
#include<sys/types.h>
#include<sys/sem.h>
#include<stdlib.h>

union semun{
    int val;
    struct semid_ds *buf;
    unsigned short int *array;
};

int main(){
    union semun arg;
    unsigned short int s[3]={1,1,1};
    int key=ftok(".",'a');
    int semid=semget(key,3,IPC_CREAT|0744);
    arg.array=s;
    semctl(semid,0,SETALL,arg);
}