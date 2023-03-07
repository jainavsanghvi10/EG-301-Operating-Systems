// Program Number: 30
// Student Name: Jainav Sanghvi(IMT2020098)
// Description: Write a program to run a script at a specific time using a Daemon process.
#include<stdio.h>
#include<sys/time.h>
#include<sys/stat.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
	if(!fork())
	{
	printf("child pid : %d\n",getpid());
	setsid();
	chdir("/");
	umask(0);
	while(1){
		sleep(20);
		printf("Daemon Process is Running\n");
	}
	}
	else
		exit(0);
}