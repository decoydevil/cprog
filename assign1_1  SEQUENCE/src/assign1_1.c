/*
 ============================================================================
 Name        : assign1_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b;
	printf("enter two numbers");

	scanf("%d %d",&a,&b); //scanf("%d %d,&a,&b"); not showing compiletime error


	printf("its sum is %d\n",a+b);

	printf("its difference is %d\n",a-b);

	printf("its hahahah  no no no no no product is %d\n",a*b);

	return EXIT_SUCCESS;
}
