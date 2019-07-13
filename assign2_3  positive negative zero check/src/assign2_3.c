/*
 ============================================================================
 Name        : assign2_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
signed int x,d;
printf("enter a number signed or unsigned\n");
scanf("%d",&x);
printf("number entered is %d\n",x);
if(x==0)
	{
	printf("number is zero\n");
	return EXIT_SUCCESS;
	}
if(x<0)
{
	if(x-x<1)
	{
		printf("number is negative\n");
}}
if(x+x>x)
{printf("number is positive\n");}
	return EXIT_SUCCESS;
}
