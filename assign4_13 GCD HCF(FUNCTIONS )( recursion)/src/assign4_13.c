/*
 ============================================================================
 Name        : assign4_13.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int GC(int x);
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
int n=x-1;
while(x!=0)
{
	if(x%n==0)
	{return n;}
	--n;
}
printf("%d%d\n",x,n);
return n;
}
