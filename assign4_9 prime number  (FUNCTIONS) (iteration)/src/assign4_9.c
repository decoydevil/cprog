/*
 ============================================================================
 Name        : assign4_9.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void ckp(int);
void disprm(int);

int main(void)
{
	int a,x,n=2;

	printf("enter a number ");
	scanf("%d",&x);

	while (n<x)
	{
	if(x%n==0)
	{
		printf("\n %d number is not prime\n",x);
		a=0;
		break;
	}
	else
	{
		n++;
		a=1;
	}
	}
	if(a!=0)
		printf("its prime %d\n",n);
return 0;
}


void disprm(int x);
