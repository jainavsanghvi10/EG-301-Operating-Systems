// Program Number: 11
// Student Name: Jainav Sanghvi(IMT2020098)
// Description: Write a program to ignore a SIGINT signal then reset the default action of the SIGINT signal - use sigaction system call.
#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void sig_handler(int signo)
{
    if (signo == SIGINT){
        signal(SIGINT, SIG_DFL);
        printf("\nreceived SIGINT and set to default\n");
    }
}

int main(void)
{
    struct sigaction act;
    act.sa_handler = &sig_handler;
    if (sigaction(SIGINT, &act, NULL) < 0) {
        perror ("sigaction");
        return 1;
    }
    while(1);
    return 0;
}