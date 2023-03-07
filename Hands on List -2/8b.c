// Program Number: 8b
// Student Name: Jainav Sanghvi(IMT2020098)
// Description: Write a separate program using signal system call to catch the following signals(SIGINT)

#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void sig_handler(int signo)
{
  if (signo == SIGINT){
    printf("received SIGINT\n");
  }
}

int main(void)
{
  if (signal(SIGINT, sig_handler) == SIG_ERR)
  printf("\ncan't catch SIGINT\n");
  // A long long wait so that we can easily issue a signal to this process
  sleep(5);
  return 0;
}

