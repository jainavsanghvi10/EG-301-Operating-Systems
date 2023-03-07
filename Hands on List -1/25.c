// Program Number: 25
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:

#include <sys/resource.h>
#include <unistd.h>
#include <time.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/wait.h>

int main()
{
    int pid, pid1, pid2;
    pid = fork();
    if (pid == 0)
    {
        sleep(10);
        printf("First Child - PID: %d, PPID: %d\n", getpid(), getppid());
    }
    else
    {
        pid1 = fork();
        if (pid1 == 0)
        {
            sleep(10);
            printf("Second Child - PID: %d, PPID: %d\n", getpid(), getppid());
        }
        else
        {
            pid2 = fork();
            if (pid2 == 0)
            {
                printf("Third Child - PID: %d, PPID: %d\n", getpid(), getppid());
            }
        }
    }
    waitpid(pid, NULL, 0);
}