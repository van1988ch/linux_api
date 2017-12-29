//tee
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

//保证在c和c++2种编译环境下面都能通过
//c下面编译不需要 extern “C”
#ifdef __cplusplus
extern "C" {
#endif
#include "linux_header.h"
#ifdef __cplusplus
}
#endif

int main(int argc, char*argv[]) {
#define MAX_LENGTH 1024
	char buf[MAX_LENGTH] = { 0 };
	int currentpos = 0;
	int ret = 0;
	int ch;
	int fd = -1;

	while ((ch = getopt(argc, argv, "a:")) != -1) {
		switch (ch) {
		case 'a':
			printf("The argument of -a is %s\n\n", optarg);
			//O_WRONLY 只读
			//O_TRUNC  每次打开文件就会清空文件
			//S_IRUSR 文件权限控制
			fd = open(optarg, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND,
					S_IRUSR | S_IWUSR);
			if (fd == -1) {
				errExit("open");
			}
			break;
		}
	}

	while (1) {
		char in;
		ret = read(STDIN_FILENO, (void *) &in, 1);
		if (-1 == ret)
			errExit("read stderror");

		buf[currentpos] = in;
		currentpos++;
		if ('\n' == in) {
			write(STDOUT_FILENO, buf, currentpos);
			if (fd != -1)
				write(fd, buf, currentpos);
			memset(buf, 0, MAX_LENGTH);
			currentpos = 0;
		} else if (strcmp("exit", buf) == 0) {
			break;
		}
	}
	if(fd != -1)
		close(fd);
	return 1;
}
