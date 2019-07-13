/*
 ============================================================================
 Name        : assign1_8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,c;
	printf("enter 3 numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("entered values are %d %d %d\n",a,b,c);
	printf("Average of the numbers = %d\n",(a+b+c)/3);

	return EXIT_SUCCESS;
}
