// Program Number: 17
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:

//run 17_db.c before running this file
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main(){
    struct{
        int ticket_no;
    }db;
    int fd = open("17_db", O_RDWR);
    read(fd,&db,sizeof(db));

    struct flock lock;
    lock.l_type=F_WRLCK;
    lock.l_whence=SEEK_SET;
    lock.l_start=0;
    lock.l_len=0;
    lock.l_pid=getpid();

    printf("Before entrering the critical section..\n");
    printf("Current ticket no: %d\n",db.ticket_no);
    db.ticket_no++; //updating ticket value
    
    fcntl(fd,F_SETLKW,&lock); //locking the file
    printf("Inside the critical section\n");
    lseek(fd,0L,SEEK_SET);
    write(fd,&db,sizeof(db));   //updating db
    printf("New ticket no: %d\n",db.ticket_no);    
    printf("Enter to unlock\n");
    getchar();
    lock.l_type=F_UNLCK;
    fcntl(fd,F_SETLK,&lock);    //unlocking the file
    printf("Finished\n");
}