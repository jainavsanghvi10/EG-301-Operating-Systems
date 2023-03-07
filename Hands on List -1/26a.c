// Program Number: 26-a
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:

#include <unistd.h>

int main(int argc, char* argv[]) 
{
    execl("/bin/ls", "ls", (char*)0);
}