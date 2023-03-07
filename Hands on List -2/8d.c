// Program Number: 8d
// Student Name: Jainav Sanghvi(IMT2020098)
// Description: Write a separate program using signal system call to catch the following signals(SIGALRM (use alarm system call))
#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<stdlib.h>

void sig_handler(int signo)
{
  if (signo == SIGALRM){
    printf("received SIGALRM\n");
    exit(0);
  }
}

int main(void)
{
  if (signal(SIGALRM, sig_handler) == SIG_ERR)
  printf("\ncan't catch SIGALRM\n");
  alarm(2);
  sleep(5);
  printf("no SIGALRM received\n");
  return 0;
}