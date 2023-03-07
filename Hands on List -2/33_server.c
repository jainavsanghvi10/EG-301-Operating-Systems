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
    struct sockaddr_in serv, cli;
    int sd, sz, nsd;
    char buf[80];
    sd = socket(AF_UNIX, SOCK_STREAM, 0);

    serv.sin_family = AF_UNIX;
    serv.sin_addr.s_addr = INADDR_ANY;
    serv.sin_port = htons(5500);

    bind(sd, (void *)(&serv), sizeof(serv));

    listen(sd, 5);
    sz = sizeof(cli);
    nsd = accept(sd, (void *)(&cli), &sz);
    read(nsd, buf, sizeof(buf));
    printf("Message from client: %s\n", buf);
    write(nsd, "ACK from Server\n", 17);
}