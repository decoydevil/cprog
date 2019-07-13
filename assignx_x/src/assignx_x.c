/*
 ============================================================================
 Name        : assignx_x.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int x;
	printf("size of int x = %d", sizeof(x));

	printf("size of int = %d", 2*2*2);
	return EXIT_SUCCESS;
} //-(2N-1) to 2N-1 - 1 (Where N is sizeof(type) * 8 i.e. total number of bits used by the type)
