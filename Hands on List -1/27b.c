// Program Number: 27-b
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:
#include <unistd.h>

int main(int argc, char* argv[]) 
{
    execlp("/bin/ls", "ls", "-Rl", (char*)0);
}