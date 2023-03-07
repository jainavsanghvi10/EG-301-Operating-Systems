// Program Number: 10
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[]){
    int fd = open(argv[1],O_CREAT|O_RDWR,0744);
    char buf[10]={'1','2','3','4','5','6','7','8','9','0'};
    write(fd,&buf,10);
    int pos=lseek(fd,10,SEEK_CUR);
    printf("return value of lseek: %d\n",pos);
    write(fd,&buf,10);
}
/*
Open the file with od and check the empty spaces in between the data. 
Do: od filename
*/