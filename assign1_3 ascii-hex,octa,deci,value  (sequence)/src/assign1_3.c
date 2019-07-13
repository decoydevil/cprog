/*
 ============================================================================
 Name        : assign1_3.c
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
char x;
printf("enter a decimal, octa, or hexadecimal\n");
scanf("%c",&x);
printf("entered character ascii value is %d \n",x);
printf("Hexa decimal value of ascci is  %x \n", x);
printf("Octa decimal value of ascci is is %o \n", x);
printf("The character input given was %c \n", x);
	return EXIT_SUCCESS;
}
