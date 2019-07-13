/*
 ============================================================================
 Name        : assign4_13_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int fact(int x);
int main(void) {
	int a,b;
	printf("enter a number");
	scanf("%d",&a);

	b=GC(a);
	printf("hcf at main is %d ",b);


	return EXIT_SUCCESS;
}
int GC(int x)
{
	int n=1;
	if(x==1)
	{return 1;}
	if(x%n==0)
	{
		printf("fact is %d\n",n);
		return n;
	}
	GC(x);
	return




/*
x=x-1;

if(n%x==0)
	{
	printf("%d is fact \n ",x);
	return x;
	}
if(x==0)
	{return 321;}
	GC(x);*/
}
