// Program Number: 17-a
// Student Name: Jainav Sanghvi(IMT2020098)
// Description: Write a program to execute ls -l | wc (using dup)

#include <unistd.h>
#include <stdio.h>

int main(){
    int fd[2];
    pipe(fd);
    if(!fork()){
        close(1);
        close(fd[0]);
        dup(fd[1]);
        execlp("ls","ls","-l",(char *)NULL);
    }else{
        close(0);
        dup(fd[0]);
        close(fd[1]);
        execlp("wc","wc",(char *)NULL);
    }
}