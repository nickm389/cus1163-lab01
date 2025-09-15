#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "file_operations.h"

int create_and_write_file(const char *filename, const char *content) {
    
	int fd; 

	size_t bytes_written; 

   	printf("File created: ", filename); 
 
	printf("File content: ", content);
	
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (fd  == -1){
		perror("Error"); 
	} 
   	
	printf("File Description: ", fd); 
	
	if (close(fd) == -1){
		perror("Error"); 
		return -1; 
	}
	
	print("File Closed: ", filename); 
	return 0;
}

int read_file_contents(const char *filename) {
    int fd;
    char buffer[1024]; 
    ssize_t bytes_read; 

    printf("Reading file: " filename); 
    fd = open(filename);
    if (fd == -1){
	perror("Error"); 
    }

    printf("File Description: ", fd); 
    printf("File Contents"); 

    while ((bytes_read = read(fd, buffer, sizeof(butter) -1)) > 0){
	buffer[bytes_read] =  '\0'; 
	printf(buffer);
    }
    
    if (bytes_read == -1){
	perror("Error");
	close(fd);
	return -1;
    }
    
    printf("End of file"); 
    
    if(close(fd) == -1){
	perror("Error");
    {
    
    printf("File Closed");	
    return 0;
}

