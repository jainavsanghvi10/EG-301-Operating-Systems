// Program Number: 17-b
// Student Name: Jainav Sanghvi(IMT2020098)
// Description: Write a program to execute ls -l | wc (using dup2)

#include <unistd.h>
#include <stdio.h>

int main(){
    int fd[2];
    pipe(fd);
    if(!fork()){
        close(fd[0]);
        dup2(fd[1],1);
        execlp("ls","ls","-l",(char *)NULL);
    }else{
        dup2(fd[0],0);
        close(fd[1]);
        execlp("wc","wc",(char *)NULL);
    }
}