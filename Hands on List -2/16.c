// Program Number: 16
// Student Name: Jainav Sanghvi(IMT2020098)
// Description: Write a program to send and receive data from parent to child vice versa. Use two way communication.

#include <string.h>
#include <unistd.h>
#include <stdio.h>

int main(){
    int fd1[2]; //from Parent to Child
    int fd2[2]; //from Child to Parent
    pipe(fd1);
    pipe(fd2);
    char dataFromParent[14];
    char dataFromChild[16];

    if(!fork()){
        close(fd1[1]);
        read(fd1[0],dataFromParent,sizeof(dataFromParent));
        printf("Message Recieved from Parent: %s\n",dataFromParent);
        
        strcpy(dataFromChild,"I am doing good");
        close(fd2[0]);
        write(fd2[1],dataFromChild,sizeof(dataFromChild));

    }else{
        strcpy(dataFromParent,"How you doin?");
        close(fd1[0]);
        write(fd1[1],dataFromParent,sizeof(dataFromParent));

        close(fd2[1]);
        read(fd2[0],dataFromChild,sizeof(dataFromChild));
        printf("Message Recieved from Child: %s\n",dataFromChild);
    }
}
