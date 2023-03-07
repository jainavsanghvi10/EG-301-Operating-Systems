// Program Number: 8a
// Student Name: Jainav Sanghvi(IMT2020098)
// Description: Write a separate program using signal system call to catch the following signals(SIGSEGV)

#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<stdlib.h>

void sig_handler(int signo)
{
  if (signo == SIGSEGV){
    printf("received SIGSEGV\n");
    exit(0);
  }
}

int main(void)
{
  if (signal(SIGSEGV, sig_handler) == SIG_ERR)
  printf("\ncan't catch SIGSEGV\n");
  int* p = NULL;
  printf("%d\n",*p);
  printf("no SIGSEGV received\n");
  return 0;
}