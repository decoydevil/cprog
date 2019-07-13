/*
 ============================================================================
 Name        : assign4_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void fact(int x);
int main(void) {
	int a;
	printf("enter a number");
	scanf("%d",&a);

	fact(a);

	return EXIT_SUCCESS;
}
void fact(int x)
{
	int a=1;
	printf("factorial is called, factorial for %d are\n",x);
	while(a!=x)
	{
		if((x%a)==0)
	{printf("%d ,",a);}
		++a;

	}

	printf("%d",a);

	}
