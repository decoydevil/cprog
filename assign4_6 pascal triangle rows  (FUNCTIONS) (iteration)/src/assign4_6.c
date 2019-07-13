/*
 ============================================================================
 Name        : assign4_6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void prntpascal(char c,int r);
int main(void) {

	char c;
	int r;

	printf("enter a character to be printed\n");
	scanf("%c",&c);
	printf("entered character is %c\n",c);
	printf("enter number of rows of pascal to be printed\n");
	scanf("%d",&r);
	printf("rows to be printed are %d\n",r);
	prntpascal(c,r);

	return EXIT_SUCCESS;
}

void prntpascal(char c,int r)
{
	int x,a,s=r*2;
	for(x=1;x<=r;x++)
	{

		for(a=1;a<=s;a++)
		{
			printf("%c",32);
		}
		s-=1;for(a=1;a<=x;a++)
		{
			printf("%c",c);
		}
		for(a=1;a<=x;a++)
		{
			printf("%c",c);
		}
		for(a=1;a<=x;a++)
				{
					printf("%c",c);
				}
		printf("\n");
	}
}


	//right traingle is printed


			/*printf("\n",c);

		while(x!=0)
			{
			printf("%c",c);
			x--;
			}
	}

			int row,col,space=12;
		for(row=1;row<=5;row++)
		{

			printf("\n");
			for(col=1;col<=space;col++)
			{
				printf("%2c",32);
			}//left triangle

			space-=1;
			for(col=1;col<=row;col++)
			{
				printf("%2c",c);
			}//middle traingle is printed


			for(col=1;col<=row;col++)
			{
				printf("%2c",c);

				*/
