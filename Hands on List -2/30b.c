// Program Number: 30b
// Student Name: Jainav Sanghvi(IMT2020098)
// Description: Write a program to create a shared memory.  b. attach with O_RDONLY and check whether you are able to overwrite.  

#include<stdio.h>
#include<unistd.h>
#include<sys/shm.h>

int main(){

    int key,shmid;
    char* data;
    
    key = ftok(".",'c');
    shmid = shmget(key,1024,0);
    //  attack to the shm
    data = (char*)shmat(shmid,NULL,SHM_RDONLY);  // 0 will look for the free space return unused space addr, flag as 0 = read+write RDONLY : read only.

    printf("Shm text : %s",data);
    

    return 0;
}