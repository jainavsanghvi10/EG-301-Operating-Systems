// Program Number: 1a
// Student Name: Jainav Sanghvi(IMT2020098)
// Description: Write a separate program (for each time domain) to set a interval timer in 10sec and 10micro second - ITIMER_REAL
#include <stdio.h>
#include <sys/time.h>

int main(){
    
    struct itimerval value;
    int which = ITIMER_REAL;

    getitimer( which, &value );

    // Time until next expiration
    value.it_value.tv_sec = 10;
    value.it_value.tv_usec = 10;

    // Interval for periodic timer
    value.it_interval.tv_sec = 10;
    value.it_interval.tv_usec = 10;

    setitimer(which,&value,NULL);

    while(1);

}