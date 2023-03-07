// Program Number: 12
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>

int main(){
    int fd = open("input.txt",O_WRONLY);
    int accmode = fcntl(fd,F_GETFL) & O_ACCMODE;
    printf("Access Mode: %d\n",accmode);    

    if(accmode==0)
        printf("Read mode \n");
    else if(accmode==1)
        printf("write mode \n");
    else if(accmode==2)
    printf("read and write mode \n");
}