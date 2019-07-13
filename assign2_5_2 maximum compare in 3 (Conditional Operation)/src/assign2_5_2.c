/*
 ============================================================================
 Name        : assign2_5_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int x,y,z,n,d;
	printf("enter 3 numbers");
	scanf("%d%d%d",&x,&y,&z);



	(x==0? printf("the number is zero"):0);
		d=(x>y ?x :y);
		n=(d>z? d:z);
		printf("the number which is greater is %d",n);


	return EXIT_SUCCESS;
}
