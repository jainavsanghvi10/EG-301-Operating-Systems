// Program Number: 16_write
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main()
{
    struct flock lock;
    int fd = open("sample.txt", O_RDWR);
    lock.l_type=F_WRLCK;
    lock.l_whence=SEEK_SET;
    lock.l_start=0;
    lock.l_len=0;
    lock.l_pid=getpid();

    printf("Before entrering the critical section..\n");
    fcntl(fd,F_SETLKW,&lock);   //locking the file
    printf("Inside the critical section\n");
    printf("Enter to unlock\n");
    getchar();
    lock.l_type=F_UNLCK;
    fcntl(fd,F_SETLK,&lock);    //unlocking the file
    printf("Unlocked\n");
}