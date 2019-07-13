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

	int x,b, a=1;
	printf("enter a number");
	scanf("%d",&x);

	printf("factorial for %d are\n",x);

	while(a!=x)
	{
		if((x%a)==0)
	{
			b=x/a;
			printf("%d * %d = %d\n",a,b,x);
	}
		++a;
	}

	return EXIT_SUCCESS;
	}
