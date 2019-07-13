/*
 ============================================================================
 Name        : assign2_4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,y,d,n;
	printf("enter two numbers to be compared");
	scanf("%d%d",&x,&y);
n=(x==0? printf("the number is zero"):0);
	d=(x>y ?x : y);
	printf("the number which is greater is %d",d);

	return EXIT_SUCCESS;
}
