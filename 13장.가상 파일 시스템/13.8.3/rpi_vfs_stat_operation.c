#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <signal.h>
#include <string.h>
#include <fcntl.h>

#define GENERAL_FILE "/home/pi/sample_text.text"
#define PROC_FILE "/proc/cmdline"

#define BUFF_SIZE 128

int main() 
{
	struct stat fileinfo;
	char fname[BUFF_SIZE] = {0,};

	strcpy(fname, GENERAL_FILE);

	printf("fname[%s] \n", fname);
	if(stat(fname, &fileinfo)) {
		printf("Unable to stat %s \n", fname);
		exit(1);
	}
	
	strcpy(fname, PROC_FILE);

	printf("fname[%s] \n", fname);
	if(stat(fname, &fileinfo)) {
		printf("Unable to stat %s \n", fname);
		exit(1);
	}	

	return 0;	
}
