// Program Number: 27-a
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:
#include <unistd.h>

int main(int argc, char* argv[]) 
{
    execl("/bin/ls", "ls", "-Rl", (char*)0);
}