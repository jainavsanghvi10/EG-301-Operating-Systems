// Program Number: 17_createDatabase
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(){
    struct{
        int ticket_no;
    }db;
    db.ticket_no=1;
    int fd = open("17_db", O_CREAT|O_RDWR,0744);
    write(fd,&db,sizeof(db));
    close(fd);
}