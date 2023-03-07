// Program Number: 20
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
    int pid = getpid();
    int priority = getpriority(PRIO_PROCESS,pid);
    printf("Priority: %d\n",priority);
    int ret = nice(-100);
    priority = getpriority(PRIO_PROCESS,pid);
    printf("New Priority: %d\n",priority);
}