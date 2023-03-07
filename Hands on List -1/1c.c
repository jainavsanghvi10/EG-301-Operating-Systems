// Program Number: 1-c
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:

#include <stdio.h>
// #include <stdlib.h>
//#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(int argc, char *argv[]){
    int f=mkfifo(argv[1],0666);
    if(f==0){
        printf("FIFO file '%s' created successfully\n",argv[1]);
    }else{
        printf("Failed to create the file.Please try again\n");
    }
    int f2=mkfifo(argv[2],0666);
    if(f2==0){
        printf("FIFO file '%s' created successfully\n",argv[2]);
    }else{
        printf("Failed to create the file.Please try again\n");
    }
}