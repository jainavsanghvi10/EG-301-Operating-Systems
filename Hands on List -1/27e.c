// Program Number: 27-e
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:
#include <unistd.h>

int main() 
{
    static char* argv[] = {"/bin/ls", "-Rl", NULL};
    execvp(argv[0], argv);
}
