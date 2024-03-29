// Program Number: 30a
// Student Name: Jainav Sanghvi(IMT2020098)
// Description: Write a program to create a shared memory.    a. write some data to the shared memory 
#include<stdio.h>
#include<unistd.h>
#include<sys/shm.h>

int main(){

    int key,shmid;
    char* data;
    
    key = ftok(".",'c');
    shmid = shmget(key,1024,IPC_CREAT|0744);
    //  attack to the shm
    data = (char*)shmat(shmid,NULL,0);  // 0 will look for the free space return unused space addr, flag as 0 = read+write

    printf("Enter Text : ");
    scanf("%[^\n]",data);

    return 0;
}