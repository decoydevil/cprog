/*
 ============================================================================
 Name        : assign3_6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int x, a=1;
	printf("enter a number");
	scanf("%d",&x);

	printf("factorial for %d are\n",x);

	while(a!=x)
	{
		if((x%a)==0)
	{
			printf("%d ",a);
	}
		++a;
	}

	return EXIT_SUCCESS;
	}
