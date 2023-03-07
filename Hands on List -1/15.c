// Program Number: 15
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:

#include <stdio.h>
#include <stdlib.h>
extern char **environ;

int main(){
    int i = 0 ;
    while(environ[i]){
        printf("%s\n",environ[i]);
        i++;
    }
}