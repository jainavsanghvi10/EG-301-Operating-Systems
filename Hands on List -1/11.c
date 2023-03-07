// Program Number: 11
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
    int fd,fd1;
    char buf[30]="Hello!This is a new sentance\n";
    fd=open("11_sample.txt",O_CREAT| O_RDWR,0744);
    fd1=dup(fd);
    write(fd,buf,30);
    lseek(fd1,30,SEEK_SET);
    write(fd1,buf,30);
    close(fd1);
       close(fd);
}