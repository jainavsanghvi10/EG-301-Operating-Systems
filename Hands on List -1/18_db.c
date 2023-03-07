// Program Number: 18_createDatabase
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(){
    struct{
        int train_no;
        int ticket_no;
    }db[3];
    for(int i=0;i<3;i++){
        db[i].train_no=i+1;
        db[i].ticket_no=1;
    }
    int fd = open("18_db", O_CREAT|O_RDWR,0744);
    write(fd,&db,sizeof(db));
    close(fd);
}
