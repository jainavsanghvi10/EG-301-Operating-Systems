// Program Number: 3
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
    int fd;
    fd= creat("myfile",0744);
    //fd=open("myfile",O_CREAT| O_RDWR,0744);
    if(fd==-1){
        printf("File could not be created\n");
    }else{
        printf("File Discriptor: %d\n",fd);
    }
    close(fd);
}