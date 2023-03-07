// Program Number: 23
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
    pid_t pid = fork(); 
  
    if (pid == 0) 
    {
        printf("Child PID: %d\n", getpid());
    }
    else        
    {
        printf("Parent PID: %d\n", getpid());
        printf("Parent process is going to sleep for 25 secs.\n");
        sleep(25); 
    }
    return 0; 
} 