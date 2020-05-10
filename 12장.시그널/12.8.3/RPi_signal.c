#include <unistd.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

void sig_handler(int signum) {
	switch(signum) {
		case SIGINT:
			printf("sig num [%d] \n", signum);
			break;
			
		case SIGALRM:
			printf("sig num [%d] \n", signum);
			break;

		case SIGKILL:
			printf("sig num [%d] \n", signum);
			break;

		default:
			printf(" default sig num [%d] \n", signum);
	}
}

int main() 
{
	struct sigaction act;
	sigset_t set;
	
	void *func_ptr;
   
    func_ptr = sig_handler;
    printf(" signal_handler = 0x%x \n", (unsigned int)func_ptr);
	
	sigemptyset(&(act.sa_mask));
	
	sigaddset(&(act.sa_mask), SIGALRM);
	sigaddset(&(act.sa_mask), SIGINT);
	sigaddset(&(act.sa_mask), SIGKILL);	
		
	act.sa_handler = sig_handler;
	
	sigaction(SIGALRM, &act, NULL);	
	sigaction(SIGINT, &act, NULL);
	sigaction(SIGUSR1, &act, NULL);

	for(;;)
		pause();
}