// Program Number: 13
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:  Write two programs: first program is waiting to catch SIGSTOP signal, the second program will send the signal (using kill system call). Find out whether the first program is able to catch the signal or not.
#include<stdio.h>
#include<signal.h>
#include<unistd.h>


int main(){
    int pid;
    printf("enter pid : ");
    scanf("%d",&pid);
    printf("sending kill signal\n");
    kill(pid,SIGSTOP);
    return 0;
}