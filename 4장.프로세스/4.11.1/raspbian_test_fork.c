#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

#define PROC_TIMES 		50
#define SLEEP_DURATION 	2
#define FORK_MAX_TIMES 	3

void raspbian_proc_process(void);

void raspbian_proc_process(void) 
{
	int proc_times = 0;
	
	for(proc_times = 0; proc_times < PROC_TIMES; proc_times++) {
			printf("raspbian tracing \n");
			sleep(SLEEP_DURATION);
	}
	
}

int main() 
{	
	pid_t pid;
	int fork_times = 0;
	
	printf("About to fork process \n");
	
	pid = fork();
	
	if ( pid == 0 )  {
		printf("start execution of child process\n");
		raspbian_proc_process();
	}
	
	else if ( pid > 0 ) {
		printf("start execution of parent process\n");
		raspbian_proc_process();
	}
	
	return 0;	
}
