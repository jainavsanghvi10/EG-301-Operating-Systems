// Program Number: 24
// Student Name: Jainav Sanghvi(IMT2020098)
// Description: Write a program to create a message queue and print the key and message queue id.
#include<stdio.h>
#include<unistd.h>
#include<sys/msg.h>
#include<sys/ipc.h>
#include<sys/types.h>

int main(){
    int msgid;
    key_t key;

    key = ftok(".",'a');

    msgid = msgget(key,IPC_CREAT|0744); //Pass 0 if already exists

    printf("Key value: %d \nMessage queue id: %d \n",key,msgid);
}