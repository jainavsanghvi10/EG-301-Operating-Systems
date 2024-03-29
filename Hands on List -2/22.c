// Program Number: 22
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:  Write a program to wait for data to be written into FIFO within 10 seconds, use select system call with FIFO. 
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char* argv []){
    struct timeval tmo;
    fd_set readfds;
    
    int fd = open("fifo_TERM-I",O_WRONLY);

    const int msg_size = 100;
    char msg[msg_size];
    printf("enter a message : ");
    fflush(stdout);

    FD_ZERO(&readfds);
    FD_SET(fd, &readfds);
    tmo.tv_sec = 10;
    tmo.tv_usec = 0;

    if(!select(fd+1, &readfds, NULL, NULL, &tmo)){
        printf("User didn't enter anything!\n");
    }
    else{
        fgets(msg, msg_size, stdin);
        write(fd,msg,msg_size);
    }
    return (0);
}
