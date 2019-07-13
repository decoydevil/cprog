/*
 ============================================================================
 Name        : assign1_2.c
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
int x;
printf("enter a decimal, octa, or hexadecimal\n");
scanf("%d",&x);
printf("entered ascii's character value is %c \n",x);
printf("Hexa decimal value of entered value is  %x \n", x);
printf("Octa decimal value of entered value is is %o \n", x);
printf("The decimal input given was %d \n", x);
	return EXIT_SUCCESS;
}
