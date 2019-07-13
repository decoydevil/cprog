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
	int x=5;
	int a=1;
	printf("fact for hard-coded value ' 5 '\n");
	while(x!=0)
		{
		a=a*x;
		printf("%d*",x);
		x--;
		}
	printf("\nfactorial of is %d",a);

	return EXIT_SUCCESS;
}
