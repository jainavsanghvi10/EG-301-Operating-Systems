// Program Number: 6
// Student Name: Jainav Sanghvi(IMT2020098)
// Description:

#include <unistd.h>

int main(){
    char buf[80];
    read(0,buf,sizeof(buf));
    write(1,buf,sizeof(buf));
}