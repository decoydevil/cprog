/*
 ============================================================================
 Name        : q1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[]={5,6,7,8,9,10};
	printf(" %u %d ",a,*a);
	int*ptr,i;
	ptr=(int*)(&a+1); // explicit typecast of array adres to int type * but implicitly happens too
	printf(" %u %d ",ptr,*ptr);
	++*ptr--;
	printf(" %u %d ",ptr,*ptr);
	printf(" %u %d \n",ptr,*ptr);
	printf("%u %u\n",a,&a);
	printf("into loop \n");
	for(i=0;i<7;i++)
		{
		printf("%4d ",a[i]);
		}
	return EXIT_SUCCESS;
}
