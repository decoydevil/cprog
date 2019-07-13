/*
 ============================================================================
 Name        : assign2_13.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int x,y,n;
	printf("enter 2 numbers on which operation is done\n");


	scanf("%d%d",&x,&y);
	printf("values entered are %d n %d \n",x,y);
	printf("select from bellow mentioned operator to be used\n");
	printf("1. Addition. (+)\n");
	printf("2. Subtraction. (-)\n");
	printf("3. Multiplication. (*)\n");
	printf("4. Division. (/)\n");
	printf("5. Modulus. (%)\n");
	scanf("%d",&n);
	switch (n)
	{
	case 1:
		printf("Addition of %d and %d is %d\n",x,y,(x+y));
		break;
	case 2:
		printf("Subtraction of %d and %d is %d\n",x,y,(x-y));
		break;
	case 3:
		printf("Multiplication of %d and %d is %d\n",x,y,(x*y));
		break;
	case 4:
		printf("Division of %d and %d is %d\n",x,y,(x/y));
		break;
	case 5:
		printf("Modulus of %d and %d is %d\n",x,y,(x%y));
		break;
	default:
		printf("Invalid value input ");
	}

	return EXIT_SUCCESS;
}
///			+, - , *, /
