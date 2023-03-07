// Program Number: 30c
// Student Name: Jainav Sanghvi(IMT2020098)
// Description: Write a program to create a shared memory.  c-detach the shared memory

#define _GNU_SOURCE
#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include<sys/resource.h>
#include <unistd.h>
#include<sys/time.h>
#include<sys/msg.h>
#include<sys/ipc.h>
#include <sys/types.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<signal.h>
#include<string.h>

int main()
{
    key_t key = ftok(".",'c'); 
	int shmid = shmget(key,1024,0); 
	char str = (char) shmat(shmid,(void*)0,0); 
	printf("Data read from memory: %s\n",str); 
	shmdt(str);
    printf("Shared Memory Detached.");
}