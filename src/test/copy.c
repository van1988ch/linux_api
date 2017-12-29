#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "linux_header.h"

#ifndef MAX_BUF_SIZE
#define MAX_BUF_SIZE 1024
#endif

int main(int argc , char *argv[]){
	if(argc != 3 || strcmp(argv[1] , "--help") == 0)
		usageErr("%s old-file new-file]",argv[0]);

	int srcFd = open(argv[1] , O_RDONLY);
	if(-1 == srcFd)
		errExit("open %s failed." , argv[1]);

	int openflags = O_CREAT | O_WRONLY | O_TRUNC;
	int filePerms = S_IRUSR | S_IWUSR | S_IRGRP |
					S_IWGRP | S_IROTH | S_IWOTH;

	int outputFd = open(argv[2] , openflags , filePerms);
	if(-1 == outputFd)
		errExit("open %s failed." , argv[2]);

	int rret = 0;
	char buf[MAX_BUF_SIZE];
	while((rret = read(srcFd , buf , MAX_BUF_SIZE)) > 0){
		if(write(outputFd , buf , rret) != rret)
			fatal("write %s failed.", argv[2]);
	}
	if(-1 == rret)
		errExit("read");
	close(srcFd);
	close(outputFd);
	return 1;
}
