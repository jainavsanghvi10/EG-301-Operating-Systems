// Program Number: 1-b
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]){
    int hl= link(argv[1],argv[2]);
    if(hl==0){
        printf("Hard Link created successfully\n");
    }else{
        printf("Failed to create Soft Link.Please try again\n");
    }
}
