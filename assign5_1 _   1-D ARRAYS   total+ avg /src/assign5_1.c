/*
 ============================================================================
 Name        : assign5_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {


	int i,x=0,arr[5];
	printf("enter marks of 5 subjects");

	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);

	}
	for(i=0;i<5;i++)
	{
		x=x+arr[i];
	}
	printf("total of all marks is %d",x);
	x=x/5;
	printf("average of all marks is %d",x);
	return EXIT_SUCCESS;
}
