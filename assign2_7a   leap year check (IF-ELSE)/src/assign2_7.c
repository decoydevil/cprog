/*
 ============================================================================
 Name        : assign2_6.c
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

if(x%4==0)
{
	printf("given year is divisible by 4\n");

	if(x%400==0)
				{printf("given year is divisible by 400\n");
					printf("given year is a leap year\n");
					return EXIT_SUCCESS;
				}
				else {
					printf("given year is not leap year not divisible by 400\n");
				}
	if(x%100!=0)
	{
		printf("given year is not divisible by 100\n");
		printf("given year is a leap year\n");
		return EXIT_SUCCESS;
	}
	else {
		printf("given year is not leap year cuz is divisible by 100\n");
		return EXIT_SUCCESS;
		}
}
else {
	printf("given year is not leap year not divisible by 4\n");
	return EXIT_SUCCESS;
}

	return EXIT_SUCCESS;
}
