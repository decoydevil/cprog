/*
 ============================================================================
 Name        : assign3_4.c
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
	int a=1;
	printf("enter a number\n");
	scanf("%d",&x);
	while(x!=0)
		{
		a=a*x;
		printf("%d*",x);
		x--;
		}
	printf("\nfactorial of is %d",a);

	return EXIT_SUCCESS;
}
