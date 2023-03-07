// Program Number: 5
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
    char array[5][10]={"1.txt","2.txt","3.txt","4.txt","5.txt"};

    for(int i=0; i<5; i++){
        int fd;
        fd= creat(array[i],0744);
        if(fd==-1){
            printf("File %s could not be created\n",array[i]);
        }
    }
    for(;;);
}
/*
Check the file discriptor table at:
cd /proc/pid/fd
*/