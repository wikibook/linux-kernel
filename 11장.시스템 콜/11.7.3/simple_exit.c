#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h>
#include <string.h>
#include <fcntl.h>

#define PROC_TIMES 		2
#define SLEEP_DURATION 	2
#define FORK_MAX_TIMES 	3

#define FILENAME_NAME "/home/pi/sample_text.text"

void raspbian_proc_process(void);

void raspbian_proc_process(void) 
{
	int proc_times = 0;

	for(proc_times = 0; proc_times < PROC_TIMES; proc_times++) {
			printf("raspbian tracing ppid:%d pid:%d \n", getppid(), getpid());
			sleep(SLEEP_DURATION);
	}
	
	exit(EXIT_SUCCESS);	
}

void raspbian_file_test()
{
	int fd = 0;
	ssize_t read_buf_size;
	off_t new_file_pos;	
	
    char buf[256];
    char string[] = "Raspbian Linux!\n";
    
    fd = open(FILENAME_NAME, O_RDWR);
    			
    read_buf_size = read(fd, buf, 256);
    printf("%s", buf);
    
    memset(buf, 0x0, sizeof(buf));
		
    write(fd, string, strlen(string));
    
    new_file_pos = lseek(fd, (off_t)0, SEEK_SET);
    
    read_buf_size = read(fd, buf, 256);
    printf("read again \n");
    printf("[+]read buffer: %s \n", buf);			
	
	close(fd);
}

int main() 
{	
	pid_t pid;
	int fork_times = 0;
	
	printf("About to fork process \n");
	
	raspbian_file_test();
	
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
