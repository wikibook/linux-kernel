#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/vfs.h>
#include <string.h>
#include <fcntl.h>

#define GENERAL_DIR "/home/pi"
#define PROC_DIR "/proc"
#define BUFF_SIZE 128

int main() 
{
	struct statfs file_sys_info;
	char fname[BUFF_SIZE] = {0,};

	strcpy(fname, GENERAL_DIR);
	
	printf("statfs under %s \n", GENERAL_DIR);
	if(statfs(fname, &file_sys_info)) {
		printf("Unable to statfs %s \n", fname);
		exit(1);
	}
	
	strcpy(fname, PROC_DIR);
	printf("statfs under %s \n", PROC_DIR);
	if(statfs(fname, &file_sys_info)) {
		printf("Unable to statfs %s \n", fname);
		exit(1);
	}	
		
	return 0;	
}