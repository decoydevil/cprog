/*
 ============================================================================
 Name        : hw01.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void swp(int *x, int *y);
int main(void) {

	int x,y;
	printf("enter vales for x and y");
	scanf("%d%d",&x,&y);
	swp(&x,&y);
	printf("%d%d",x,y);

	return EXIT_SUCCESS;
}
void swp(int *x, int *y)
{
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
}
