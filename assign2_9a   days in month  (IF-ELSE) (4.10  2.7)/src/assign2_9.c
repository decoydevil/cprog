/*
 ============================================================================
 Name        : assign2_9.c
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
	printf("enter a month/year\n");
	scanf("%d%d",&x,&y);

	printf("\nnumber recieved is %d\n",x);
		while(x<=7) // months before july, evens are 30 or odd 31
		{
			if(x%2==0)
				{printf("\nthe month has 30 days\n");
				break;}
			else {
				printf("\nthe month has 31 days\n");
				break;
			}
				}
		while (x>7) // months after july, odds are 30 or even 31
			{
			if(x%2!=0)
			{
				printf("\nmonth has 30 days\n");
				break;}
				else
				{
					printf("\nmonth has 31 days\n");
					break;}
			}

			if(x==2)
			{
				printf("\nhey its february\n"); // feb month
			}

			//year work started

			if(y%4==0)
			{
				printf("given year is divisible by 4\n");

				if(y%400==0)
							{printf("given year is divisible by 400\n");
								printf("given year is a leap year\n");
								return EXIT_SUCCESS;
							}
							else {
								printf("given year is not leap year not divisible by 400\n");
							}
				if(y%100!=0)
				{
					printf("given year is not divisible by 100\n");
					printf("given year is a leap year\n");
					return EXIT_SUCCESS;
				}
				else {
					printf("given year is not leap year cuz is divisible by 100\n");
					return EXIT_SUCCESS;
					}
			}
			else {
				printf("given year is not leap year not divisible by 4\n");
				return EXIT_SUCCESS;
			}





	return EXIT_SUCCESS;
}
