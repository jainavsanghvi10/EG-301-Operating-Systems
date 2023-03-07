// Program Number: 9
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <time.h>

int main(int argc,char *argv[]){
    struct stat buf;
    int fd = open(argv[1],O_RDONLY);
    stat(argv[1],&buf);

    printf("a) Inode Number = %ld \n",buf.st_ino);
    printf("b) No of hard links = %ld\n",buf.st_nlink);
    printf("c) User id = %d\n",buf.st_uid);
    printf("d) Group id = %d\n",buf.st_gid);
    printf("e) Size = %ld\n",buf.st_size);
    printf("f) Block Size = %ld\n",buf.st_blksize);
    printf("g) Number of blocks = %ld\n",buf.st_blocks);
    printf("h) Time of last access = %s\n",ctime(&buf.st_atime));
    printf("i) Time of last modification = %s\n",ctime(&buf.st_mtime));
    printf("j) Time of last change = %s\n",ctime(&buf.st_ctime));
}