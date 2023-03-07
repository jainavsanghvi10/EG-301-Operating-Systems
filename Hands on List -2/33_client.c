// Program Number: 33
// Student Name: Jainav Sanghvi(IMT2020098)
// Description: Write a program to communicate between two machines using socket.
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<sys/stat.h>

int main()
{
    struct sockaddr_in serv;
    int sd;
    char buf[80];
    sd = socket(AF_UNIX, SOCK_STREAM, 0);

    serv.sin_family = AF_UNIX;
    serv.sin_addr.s_addr = INADDR_ANY;
    serv.sin_port = htons(5500);

    connect(sd, (void *)(&serv), sizeof(serv));
    write(sd, "Hello Server\n", 14);
    read(sd, buf, sizeof(buf));
    printf("Message from server: %s\n", buf);
}