// Program Number: 7
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
    int fd1, fd2;
    fd1 = open(argv[1], O_RDWR, 0744);
    fd2 = open(argv[2], O_CREAT | O_RDWR, 0744);
    if (fd1 == -1 || fd2==-1)
    {
        printf("Unable to open the file");
        return 1;
    }
    int pos=lseek(fd1, 0, SEEK_END); // file discriptor set at end
    lseek(fd1, 0, SEEK_SET); // file discriptor set at start
    char buf[pos];
    read(fd1, buf, sizeof(buf));
    write(fd2,buf,sizeof(buf));
    // while (pos--)
    // {
    //     char ch;
    //     read(fd1, &ch, sizeof(ch)); // copying file character by character
    //     write(fd2, &ch, sizeof(ch));
        
    // }
    close(fd1);
    close(fd2);
}