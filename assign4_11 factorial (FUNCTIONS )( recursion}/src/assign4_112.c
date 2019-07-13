/*
 ============================================================================
 Name        : assign4_112.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int fact(int x);

int main(void)
{
	int x,a;
	printf("enter a number\n");
	scanf("%d",&x);
	a=fact(x);
	printf("\nvalue returned is %d",a);

	return EXIT_SUCCESS;
}

int fact(int x)
{
	int n;
	if(x==0)
		{return 0;}
	n=x*fact(x-1);
		return n;
}
