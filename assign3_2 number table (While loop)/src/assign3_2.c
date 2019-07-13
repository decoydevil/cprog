/*
 ============================================================================
 Name        : assign3_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,y=1;
	printf("enter the no. whose table is to be printed");
	scanf("%d",&x);
	while(y<11)
	{
	printf(" \n %d*%d = %d",x,y,x*y);
	y++;
	}
	return 0;
}
