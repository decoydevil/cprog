/*
 ============================================================================
 Name        : assign4_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void prnt(char d, int a);
int main(void) {
	char c;
	int x;
	printf("enter a character \n");
	scanf("%c",&c);
	printf("enter the no. of times to be printed \n");
	scanf("%d",&x);
	prnt(c,x);

	return 0;
}

void prnt(char d, int a)
{

	while(a!=0)
	{ printf("%c",d);
	a--;
	}
	printf(" \n loop exited, print completed!");
}
