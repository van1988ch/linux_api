//============================================================================
// Name        : linux_api.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <unistd.h>
#include <sys/reboot.h>
#include <stdio.h>
#include "linux_header.h"
#include <errno.h>
#include <iostream>
using namespace std;

//enum sizeof is variable by constant limits
typedef enum {
	TEST_A, TEST_B = 123312323434424
} enumTest;


int main() {
	enumTest a;
	cout << sizeof(a) << endl;

	const char *pdata = "sdfs";
	cout << *pdata << endl;

	printf("%x\n", 672274793);
	printf("%x\n", 85072278);
	printf("%x\n", 369367448);
	printf("%x\n", 537993216);
	return 0;
}
