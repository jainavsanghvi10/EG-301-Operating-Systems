// Program Number: 18
// Student Name: Jainav Sanghvi(IMT2020098)
// Description: Write a program to find out total number of directories on the pwd. 
//              execute ls -l | grep ^d | wc ? Use only dup2

#include <unistd.h>
#include <stdio.h>

int main(){
    int fd1[2]; //for pipe1
    int fd2[2]; //for pipe2
    pipe(fd1);
    pipe(fd2);
    if(!fork()){
        close(fd1[0]);
        close(fd2[0]);
        close(fd2[1]);
        dup2(fd1[1],1);
        execlp("ls","ls","-l",(char *)NULL);
    }else{
        if(!fork()){
            close(fd1[1]);
            close(fd2[0]);
            dup2(fd1[0],0);
            dup2(fd2[1],1);
            execlp("grep","grep","^d",(char *)NULL);
        }else{
            close(fd2[1]);
            close(fd1[0]);
            close(fd1[1]);
            dup2(fd2[0],0);
            execlp("wc","wc",(char *)NULL);
        }
    }
}