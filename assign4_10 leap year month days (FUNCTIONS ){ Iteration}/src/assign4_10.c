/*
 ============================================================================
 Name        : assign4_10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int leap (int x);
void mnth(int x);
int main(void) {
	int x;
	printf("enter a month by number");
	scanf("%d",&x);
	x=leap(x);
	if(x==0)
		{
	printf("given year is leap year\n");
		}
	else {
		printf("its not a leap year\n");
	}

	printf("\nenter a month by number\n");
	scanf("%d",&x);
	mnth(x);

	return EXIT_SUCCESS;
}



int leap (int x)
{
if(x%4==0)
	{
return 0;
	}
else {
	return 1;
}
	}



void mnth(int x)
{
	printf("\nnumber recieved is %d",x);
	while(x<=7)
	{
		if(x%2==0)
			{printf("\nthe month has 30 days");
			break;}
		else {
			printf("\nthe month has 31 days");
			break;
		}
			}
	while (x>7)
		{
		if(x%2!=0)
		{
			printf("\nmonth has 30 days");
			break;}
			else
			{
				printf("\nmonth has 31 days");
				break;}

		}

		if(x==2)
		{
			printf("\nhey its february");
		}
}
