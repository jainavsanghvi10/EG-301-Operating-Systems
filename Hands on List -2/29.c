// Program Number: 29
// Student Name: Jainav Sanghvi(IMT2020098)
// Description: Write a program to remove the message queue.
#include<unistd.h>
#include <stdio.h> 
#include <sys/ipc.h> 
#include <sys/msg.h> 

int main() 
{ 
	key_t key; 
	int msqid; 
	key = ftok(".", 'a'); 

	msqid = msgget(key,IPC_CREAT|0666); 
    printf("MSG ID : %d\n",msqid);

	msgctl(msqid,IPC_RMID,NULL);
    execlp("ipcs","ipcs","-q",NULL);
    
} 
