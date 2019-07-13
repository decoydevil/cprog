/*
 ============================================================================
 Name        : assign2_7b.c
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
printf("enter a year to be checked leap year\n");
scanf("%d",&x);

if((x%4==0) && (x%400==0 ||x%100!=0))
{
	printf("given year is a leap year");
}
else {
	printf("given year is not leap year");
}

	return EXIT_SUCCESS;
}
