// Program Number: 28
// Student Name: Jainav Sanghvi(IMT2020098)
// Description: Write a program to get maximum and minimum real time priority.

#include<stdio.h>
#include <sched.h>

int main(int argc, char* argv[]) 
{
    printf("Minimum Real time priority is: %d\n", sched_get_priority_min(SCHED_RR));
    printf("Maximum Real time priority is: %d\n", sched_get_priority_max(SCHED_RR));
}