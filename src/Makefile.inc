LINUX_DIR=..
LINUX_LIB=$(LINUX_DIR)/liblinuxapi.a
LINUX_INCL_DIR=$(LINUX_DIR)/lib

LINUX_LIBRT=-lrt
LINUX_LIBDL=-ldl
LINUX_LIBACL=-acl
LINUX_LIBCRYPT=-lcrypt
LINUX_LIBCAP=-lcap

IMPL_CFLAGS= -std=c99 -D_XOPEN_SOURCE=600 \
		-D_DEFAULT_SOURCE \
		-g -I${LINUX_INCL_DIR} \
		-pedantic \
		-Wall \
		-W \
		-Wmissing-prototypes \
		-Wno-sign-compare \
		-Wno-unused-parameter
		
IMPL_CXXFLAGS= -D_XOPEN_SOURCE=600 \
		-D_DEFAULT_SOURCE \
		-g -I${LINUX_INCL_DIR} \
		-pedantic \
		-Wall \
		-W \
		-Wno-sign-compare \
		-Wno-unused-parameter
		
CFLAGS = ${IMPL_CFLAGS}
CXXFLAGS = ${IMPL_CXXFLAGS}

IMPL_THREAD_FLAGS=-pthread
IMPL_LDLIBS= -lm
LDLIBS = ${IMPL_LDLIBS}

RM= rm -f