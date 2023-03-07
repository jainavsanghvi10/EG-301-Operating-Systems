// Program Number: 1c
// Student Name: Jainav Sanghvi(IMT2020098)
// Description: Write a separate program (for each time domain) to set a interval timer in 10sec and 10micro second - ITIMER_PROF
#include <stdio.h>
#include <sys/time.h>


int main(){
    
    struct itimerval value;
    int which = ITIMER_PROF;

    getitimer( which, &value );

    // Time until next expiration
    value.it_value.tv_sec = 1;
    value.it_value.tv_usec = 0;

    // Interval for periodic timer
    value.it_interval.tv_sec = 1;
    value.it_interval.tv_usec = 0;

    setitimer(which,&value,NULL);

    while(1);

}