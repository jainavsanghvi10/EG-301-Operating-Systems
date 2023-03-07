// Program Number: 1-a
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]){
    int sl= symlink(argv[1],argv[2]);
    if(sl==0){
        printf("Soft Link created successfully\n");
    }else{
        printf("Failed to create Soft Link.Please try again\n");
    }
}
