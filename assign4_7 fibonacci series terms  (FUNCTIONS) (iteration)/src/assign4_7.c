/*
 ============================================================================
 Name        : assign4_7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void fibo(int);
int main(void) {
	int x;
	//printf("enter a number till which fibo series is to be printed");
	printf("enter number of terms of fibonacci series to be printed");
	scanf("%d",&x);
	fibo(x);
	return 0;
}
void fibo(int x)
{

	int past=1,current=2,ans;
	while(x!=0)
	{
		printf("%d ",current);
		ans=current+past;
		past=current;
		current=ans;
		x--;


	}

}
