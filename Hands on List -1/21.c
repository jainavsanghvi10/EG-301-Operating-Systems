// Program Number: 21
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:

#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include<sys/resource.h>
#include <unistd.h>
#include<time.h>

int main()
{
    int pid = fork();
    printf("%d\n", pid);
    if(pid == 0)
    {
        printf("Child PID: %d\n", getpid());
    }
    else 
    {
        printf("Parent PID is: %d\n", getpid());
    }
}
