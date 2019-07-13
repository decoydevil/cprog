/*
 ============================================================================
 Name        : assign2_8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x;
	float t;
	printf("enter quantity of item\n");
	scanf("%d",&x);
t=5*x;
printf("total price of purchase is %lf\n",t);
if(x>=30 && x<50)
{
	t=t-t*(0.1);
	printf("discounted with 10% purchase price is %lf \n",t);
}
if(x>=50)
{
	t=t-t*(0.15);
	printf("discounted with 15% purchase price is %lf \n",t);
}


	return EXIT_SUCCESS;
}

