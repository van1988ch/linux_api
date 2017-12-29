DIRS = lib \
		test

BUILD_DIR=${DIRS} ${CDIRS}

all:
	@ for dir in ${BUILD_DIR}; do (cd $${dir}; ${MAKE}) ;done
	
allgen:
	@ for dir in ${BUILD_DIR}; do (cd $${dir}; ${MAKE} allgen) ;done
	
clean:
	@ for dir in ${BUILD_DIR}; do (cd $${dir}; ${MAKE} clean) ;done