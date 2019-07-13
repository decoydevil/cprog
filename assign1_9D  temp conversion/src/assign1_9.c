/*
 ============================================================================
 Name        : assign1_9.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float c,f;
	printf("enter a temperature fahrenheit value\n");
	scanf("%f",&f);
	printf("entered value is %f\n",f);
	c=(5.0/9.0)*(f-32);
	printf("celcius value of fahrenheit is %f\n",c); // no error printing format specifier as %dlf
	printf("enter a temperature celcius value\n");
	scanf("%f",&c);
	printf("entered value is %f\n",c);
	f=32+(1.8*c);
	printf("fahrenheit temp of celcius is %f\n",f);


	return EXIT_SUCCESS;
}
