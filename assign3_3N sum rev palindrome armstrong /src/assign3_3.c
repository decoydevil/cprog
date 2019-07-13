/*
 ============================================================================
 Name        : assign3_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,cs,a,c=0;
	/*enum evariable {a,b,c};
	enum evariable r;
	r=c;*/
	printf("enter a number");
	scanf("%d",&x);
	printf("value entered is %d",x);
	//printf("\n %d",r);
	printf("\nselect from the choices \n1. calculate sum of digits of the no.");
	printf("\n2. reverse the number");
	printf("\n3. check weather the no. is palindrome or not");
	printf("\n4.check if no. is armstrong no.");
	printf("\n5.exit");
	scanf("%d",&cs);
	switch(cs)
	{
	case 1:
		printf("case 1 executed");
		//calculate sum of the integers of the number xxxx
		w hile(x!=0)
		{

		a=x % 10;
		x=x/10;
		c=a+c;
printf("value of mod is %d",a);
		}
		printf("\n value of the sum of integers of number is %d",c);
		break;
	case 2:
		printf("case 2 executed");
		break;
	case 3:
			printf("case 3 executed");
			break;
	case 4:
			printf("case 4 executed");
			break;
	default:
		printf("default");
	}

	return EXIT_SUCCESS;
}
