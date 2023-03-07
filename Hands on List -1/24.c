// Program Number: 24
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:

#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include<sys/resource.h>
#include <unistd.h>
#include<time.h>
#include <sys/stat.h>
#include <fcntl.h>

int main() 
{ 
    int pid = fork();
    if (pid == 0)
    {
        printf("Child PID: %d\n", getpid());
        printf("Child process is going to sleep for 25 secs.\n");
        sleep(25);
    }
    else
    {
        printf("Parent PID: %d\n", getpid());
    }
    return 0;
}