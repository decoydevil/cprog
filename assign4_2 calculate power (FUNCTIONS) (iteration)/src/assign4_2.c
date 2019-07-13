/*
 ============================================================================
 Name        : assign4_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int power(int,int);
int main(void) {
	int a,b,d;
	printf("enter a number and its power value\n");
	scanf("%d  %d",&a,&b);

	printf("entered number %d to power %d\n",a,b);

	d=power(a,b);
	printf("value returned is  %d\n",d);



	return EXIT_SUCCESS;
}

int power(int a,int b)
{
	int d=1,B;
	B=b;

	printf("recieved values %d %d and var %d\n",a,b,d);

	while(b!=0)
	{
		d=d*a;
	--b;}
	printf("result of %d to the power %d is %d\n ",a,B,d);
	return d;
}
