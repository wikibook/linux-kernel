#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h>
#include <string.h>
#include <fcntl.h>

#define FILENAME_NAME "/home/pi/sample_text.text"
	
int main() 
{
    int fd = 0;
    ssize_t read_buf_size;
    off_t new_file_pos;	
	
    char buf[256];
    char string[] = "Raspbian Linux!\n";

    memset(buf, 0x0, sizeof(buf));
    
    fd = open(FILENAME_NAME, O_RDWR);
    			
    read_buf_size = read(fd, buf, 256);
    printf("%s", buf);
    
    write(fd, string, strlen(string));
    
    new_file_pos = lseek(fd, (off_t)0, SEEK_SET);
    
    read_buf_size = read(fd, buf, 256);
    printf("read again \n");
    printf("[+]read buffer: %s \n", buf);
	
	write(fd, string, strlen(string));
	if ( -1 == fsync(fd)) {
		printf( "fsync() fails"); 
		exit(0);
	}	
			
	close(fd);
	
    return 0;	
}