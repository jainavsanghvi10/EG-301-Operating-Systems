// Program Number: 27-c
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:
#include <unistd.h>

int main(int argc, char* argv[]) 
{
    execle("/bin/ls", "ls", "-Rl", (char*)0, (char*)0);
}
