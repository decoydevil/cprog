/*
 ============================================================================
 Name        : assign4_112.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int pwr(int x,int p);

int main(void)
{
	int x,p,a;
	printf("enter a number and its power \n");
	scanf("%d%d",&x,&p);

	printf("number is %d to the power %d \n",x,p);
	a=pwr(x,p);
	printf("\nvalue returned is %d",a);

	return EXIT_SUCCESS;
}

int pwr(int x,int p)
{
	int n;
	if(p==0)
	{return 1;}
	printf("p is %d\n",p);
	n=x*pwr(x,p-1);
		return n;
}
