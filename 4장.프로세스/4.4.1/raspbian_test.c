#include <stdio.h>
#include <unistd.h>

#define PROC_TIMES 500
#define SLEEP_DURATION 3  // second unit

int main() 
{
	int proc_times = 0;

	for(proc_times = 0; proc_times < PROC_TIMES; proc_times++) {
		printf("raspbian tracing \n");
		sleep(SLEEP_DURATION);
	}

	return 0;	
}
