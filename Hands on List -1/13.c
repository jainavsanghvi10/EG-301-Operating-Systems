// Program Number: 13
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:

#include <sys/select.h>
#include <sys/types.h>
#include <sys/time.h>
#include <unistd.h>
#include<stdio.h>

int main(){
    fd_set rfds;
    struct timeval tv;
    int retval;

    FD_ZERO(&rfds);
    FD_SET (0,&rfds);
    tv.tv_sec=10;
    tv.tv_usec=0;
    

    retval = select(1,&rfds,NULL,NULL,&tv);

    if(retval == 0){
        printf("No input within 10sec\n");
    }
    else{
        printf("Data is available within 10 sec\n");
    }

}