// Program Number: 13
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:  Write two programs: first program is waiting to catch SIGSTOP signal, the second program will send the signal (using kill system call). Find out whether the first program is able to catch the signal or not.
#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void sig_handler()
{
    printf("received SIGSTOP\n");
}

int main(){
    int pid = getpid();
    printf("%d waiting for SIGSTOP...\n",pid);
    if (signal(SIGSTOP, sig_handler) == SIG_ERR){
        perror("signal ");
        printf("can't catch SIGSTOP\n");
    }
    while(1);
    return 0;
}