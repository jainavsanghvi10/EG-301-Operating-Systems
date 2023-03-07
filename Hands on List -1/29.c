// Program Number: 29
// Student Name: Jainav Sanghvi(IMT2020098)
// Description: Write a program to get scheduling policy and modify the scheduling policy (SCHED_FIFO,SCHED_RR).

#include<sched.h>
#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    pid_t PID=getpid();
    int schedule=sched_getscheduler(PID);
    struct sched_param temp;
    temp.sched_priority=99;

    if(schedule==SCHED_RR)
    {
        printf("Round Robin\n");
        sched_setscheduler(PID,SCHED_FIFO,&temp);
    }
    else if(schedule==SCHED_FIFO)
    {
        printf("FIFO\n");
        sched_setscheduler(PID,SCHED_RR,&temp);
    }
    else
    {
        printf("Other\n");
        sched_setscheduler(PID,SCHED_FIFO,&temp);
        schedule = sched_getscheduler(PID);
        if(schedule==SCHED_FIFO)
        {
            printf("FIFO\n");
            sched_setscheduler(PID,SCHED_RR,&temp);
        }
    }

}
