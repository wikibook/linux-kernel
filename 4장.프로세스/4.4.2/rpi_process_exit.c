#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define PROC_TIMES 3
#define SLEEP_DURATION 3  // second unit

int main() 
{
	int proc_times = 0;
	
	for(proc_times = 0; proc_times < PROC_TIMES; proc_times++) {
			printf("rpi tracing \n");
			sleep(SLEEP_DURATION);
	}
	
	exit(EXIT_SUCCESS);
		
	return 0;	
}
