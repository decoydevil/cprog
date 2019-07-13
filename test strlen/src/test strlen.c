/*
 ============================================================================
 Name        : test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char *s= "sunbeam";
	int i;
	char *p=s;

	for(i=0;i<strlen(p);++i,++p)
	printf("%c",*p++);
	return EXIT_SUCCESS;
}
