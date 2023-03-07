// Program Number: 27-d
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:

#include <unistd.h>

int main() 
{
    static char* argv[] = {"/bin/ls", "-Rl", NULL};
    execv(argv[0], argv);
}