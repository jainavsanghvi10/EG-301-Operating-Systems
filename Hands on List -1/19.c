// Program Number: 19
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:

#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include<time.h>
  
int main() 
{ 
    clock_t start_time,end_time;
    start_time= clock();
    getpid();
    end_time = clock();
    float time = ((double)(end_time-start_time))/CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n",time);
} 