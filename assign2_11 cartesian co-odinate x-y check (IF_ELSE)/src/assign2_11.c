/*
 ============================================================================
 Name        : assign2_11.c
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
	printf("enter 2 coordinates x and y\n");
	scanf("%d%d",&x,&y);

	printf("coordinate entered are %d %d\n",x,y);

	if(x==0)
		{
		printf("given coordinate point will lie on x-axis\n");
		}
	if(y==0)
		{
		printf("given coordinate point will lie on y-axis\n");
		}

	if(x<0 && y<0)
	{
		printf("given coordinate point will lie in 3rd quadrant \n");
	}

	if(x>0 && y<0)
		{
			printf("given coordinate point will lie in 4th quadrant \n");
		}
	if(x<0 && y>0)
		{
			printf("given coordinate point will lie in 2nd quadrant \n");
		}
	if(x>0 && y>0)
		{
			printf("given coordinate point will lie in 1st quadrant \n");
		}
	if(x==0 && y==0)
		{
			printf("given coordinate point will lie on Origin \n");
		}


	return EXIT_SUCCESS;
}
