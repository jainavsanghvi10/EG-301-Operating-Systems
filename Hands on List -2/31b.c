// Program Number: 31
// Student Name: Jainav Sanghvi(IMT2020098)
// Description: Write a program to create a semaphore and initialize value to the semaphore.
                //a. create a binary semaphore    b. create a counting semaphore

#include<stdio.h>
#include<unistd.h>
#include<sys/sem.h>

union semun
{
    int val;    //value for SETVAL
    struct semid_ds *buf; //buffer for IPC_STAT, IPC_SET
    unsigned short int *array; //array for GETALL, SETALL 
};

int main(){
    union semun arg;
    int key=ftok(".",'a');
    int semid=semget(key,2,IPC_CREAT |0744);
    static ushort semarray[2]={1,2};
    arg.array=semarray;
    semctl(semid,0,SETALL,arg);
    for(int i=0;i<2;i++){
        int ret=semctl(semid,i,GETVAL,0);
        printf("Sem %d: %d\n",i,ret);
    }
}