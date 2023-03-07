// Program Number: 22
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

int main(int argc, char* argv[])
{
    int pid, fd;
    fd = open(argv[1],O_CREAT|O_RDWR, 0744);
    pid = fork();
    if(pid == 0)
    {
        printf("Child is Writing....\n");
        lseek(fd, 0, SEEK_END);
        write(fd, "CHILD WRITING\n", 14);
    }
    else
    {
        printf("Parent is Writing....\n");
        lseek(fd, 0, SEEK_END);
        write(fd, "PARENT WRITING\n", 15);
    }
}