// Program Number: 19d
// Student Name: Jainav Sanghvi(IMT2020098)
// Description: Create a FIFO file by mknod system call

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
    if(mknod("myfifo_mknod", S_IFIFO, 0) != 0)
        printf("Failed to execute mknod!\n");
    return 0;
}