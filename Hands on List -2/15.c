// Program Number: 15
// Student Name: Jainav Sanghvi(IMT2020098)
// Description: Write a simple program to send some data from parent to the child process.
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int main(){
    int fd[2];
    pipe(fd);
    char data[14];
    if(!fork()){
        close(fd[1]);
        close(0);
        dup(fd[0]);
        read(0,data,sizeof(data));
        printf("Message Recieved: %s\n",data);
    }else{
        strcpy(data,"How you doin?");
        close(fd[0]);
        close(1);
        dup(fd[1]);
        write(1,data,sizeof(data));
    }
}
