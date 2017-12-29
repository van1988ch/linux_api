include ../Makefile.inc

allgen : ${LINUX_LIB}

${LINUX_LIB} : *.c ename.c.inc
	${CC} -c -g ${CFLAGS} *.c
	${RM} ${LINUX_LIB}
	${AR} rs ${LINUX_LIB} *.o
	
ename.c.inc :
	sh Build_ename.sh > ename.c.inc
	echo 1>&2 "ename.c.inc built"
	
clean:
	${RM} *.o ename.c.inc ${LINUX_LIB}