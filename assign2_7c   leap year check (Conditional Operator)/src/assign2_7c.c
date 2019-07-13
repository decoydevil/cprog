/*
 ============================================================================
 Name        : assign2_7c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int x,n1,n2,n3;
printf("enter a year to be checked leap year\n");
scanf("%d",&x);

n1=(x%4==0? 0:1);
n2=(x%400==0? 0:1);
n3=(x%100!=0? 0:1);
(n1==0? printf("given year is divisible by 4\n"): printf("given year is not leap year not divisible by 4\n"));
(n2==0? printf("given year is divisible by 400\n"): printf("given year is not leap year not divisible by 400\n"));
(n2+n3!=2? printf("its a leap year\n"): printf("its not a leap year "));


	return EXIT_SUCCESS;
}
