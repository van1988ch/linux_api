include ../Makefile.inc

LINUX_EXE = linux_api tee copy
EXE = ${LINUX_EXE}

all : ${EXE}

allftw : ${FTW_EXE}

allgen : ${GEN_EXE}

clean : 
	${RM} ${EXE} *.O
	
${EXE} : ${LINUX_LIB}