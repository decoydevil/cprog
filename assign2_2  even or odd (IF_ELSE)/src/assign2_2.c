/*
 ============================================================================
 Name        : assign2_2.c
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
	printf("enter a number");
	scanf("%d",&x);
	if(x%2==0)
	{
		printf("number is even");
	}
	else
	{
		printf("number is odd");
	}
	return EXIT_SUCCESS;
}
