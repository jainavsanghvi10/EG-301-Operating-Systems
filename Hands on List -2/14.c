// Program Number: 14
// Student Name: Jainav Sanghvi(IMT2020098)
// Description: Write a simple program to create a pipe, write to the pipe, read from pipe and display on the monitor

#include<stdio.h>
#include<unistd.h>

int main(){

    int fd[2];
    char msg[] = "MESSAGE";
    char rcvmsg[100];
    if(pipe(fd) == -1)
    {
        printf("Pipe failed\n");
    }
    write(fd[1],msg,sizeof(msg));
    read(fd[0], rcvmsg, sizeof(msg));
    printf("Message recieved: %s \n",rcvmsg);
    return 0;
} 