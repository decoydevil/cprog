/*
 ============================================================================
 Name        : assign4_8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int fibo();
int c=1,p=1,a=1;

int main(void)
{
	int x;
	printf("enter a number to return the next term of series \n");
	scanf("%d",&x);
	fibo();
	fibo();
	fibo();
	fibo();
	fibo();
	fibo();
	x= fibo();
	printf("returned value is %d\n",x);
	return 0;
}
int fibo()
{

	printf("current value of fibonacci series is %d \n",a);
	a=p+c;
	p=c;
	c=a;
	return a;

}
