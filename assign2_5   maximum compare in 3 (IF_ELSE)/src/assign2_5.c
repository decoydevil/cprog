/*
 ============================================================================
 Name        : assign2_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,y,z;
	printf("enter 3 numbers");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y)
	{
		printf("%d is greater then %d\n",x,y);
		if(x>z)
		{
			printf("%d is greater than %d and %d \n",x,y,z);
		}
		else
					{printf("%d is greater then %d and %d\n",z,x,y);}
	}

	if(y>x)
		{
			printf("%d is greater then %d\n",y,x);
			if(y>z)
			{
				printf("%d is greater than %d and %d \n",y,x,z);
			}
			else
			{printf("%d is greater then %d and %d\n",z,x,y);}
		}

	return EXIT_SUCCESS;
}
