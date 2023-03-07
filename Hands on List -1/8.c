// Program Number: 8
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int main(int argc, char *argv[]){

    char buff[1024];
    int fd = open(argv[1],O_RDONLY);
    while(read(fd,buff,1))
    {
        if(buff[0] =='\n'){
            getchar();
        }
        else
        {
            printf("%c",buff[0]);
        }
        
    }
    close(fd);
}