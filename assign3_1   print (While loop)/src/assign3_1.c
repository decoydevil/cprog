/*
 ============================================================================
 Name        : assign3_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c;
	int x;
	printf("enter a character \n");
	scanf("%c",&c);
	printf("enter the no. of times to be printed \n");
	scanf("%d",&x);
	while(x!=0)
	{ printf("%c",c);
	x--;
	}
	printf(" \n loop exited");
	return 0;
}
