// Program Number: 4
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
    int fd;
    fd=open("sample1.txt",O_RDWR,0744);
    // fd=open("sample1.txt",O_CREAT|O_EXCL|O_RDWR,0744);
    perror("open");
    if(fd==-1){
        printf("File could not be opened\n");
    }else{
        printf("File is successfully opened\n");
    }
    close(fd);
}
