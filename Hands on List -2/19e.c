// Program Number: 19e
// Student Name: Jainav Sanghvi(IMT2020098)
// Description: Create a FIFO file by mkfifo library function

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>  
#include <stdio.h>

int main()
{
    if(mkfifo("myfifo_mkfifo", 0) != 0)
        printf("Failed to execute mknod!\n");
    return 0;
}