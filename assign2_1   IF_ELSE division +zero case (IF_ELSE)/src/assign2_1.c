/*
 ============================================================================
 Name        : assign2_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,y,d;
	printf("enter two numbers x and y to be divided ");
	scanf("%d%d",&x,&y);
	if(y==0)
	{
		printf("divisor cant be zero");
		return EXIT_SUCCESS;
	}
	d=x/y;
	printf("the division of %d by %d is %d",x,y,d);
	return EXIT_SUCCESS;
}
