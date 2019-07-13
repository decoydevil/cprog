/*
 ============================================================================
 Name        : assign2_4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,y;
	printf("enter two numbers to be compared");
	scanf("%d%d",&x,&y);
	if(x>y)
	{
		printf("%d is greater then %d",x,y);
	}
	if(x<y)
		{
			printf("%d is smaller then %d",x,y);
		}
	if(x==y)
		{
			printf("%d is equal to %d",x,y);
		}

	return EXIT_SUCCESS;
}
