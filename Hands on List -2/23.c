// Program Number: 23
// Student Name: Jainav Sanghvi(IMT2020098)
// Description: Write a program to print the maximum number of files can be opened within a process and  size of a pipe (circular buffer).
#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>


int main(){
    int p[2];
    pipe(p);
    int pipe_size = fcntl(p[0],F_GETPIPE_SZ);
    printf("pipe size = %d\n",pipe_size);
    printf("max nnum of open fds = %d\n",FOPEN_MAX);
    return 0;
}
