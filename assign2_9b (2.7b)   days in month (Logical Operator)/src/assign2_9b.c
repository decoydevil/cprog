/*
 ============================================================================
 Name        : assign2_9b.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int n,x,y;
printf("enter a month/year to be checked no. of days/leap year\n");
scanf("%d%d",&x,&y);


//month work started


printf("\n month recieved is %d\n",x);

n=(x<=7? x%2==0:x%2!=0 );
printf("\n operator value is %d\n",n);
n=(n==1? printf("\nthe month has 30 days"):printf("\nthe month has 31 days"));

n=(x>7? x%2==0:x%2!=0 );
printf("\n operator value is %d\n",n);
n=(n==1? printf("\nthe month has 31 days"):printf("\nthe month has 30 days"));


		//year work started

		if((y%4==0) && (y%400==0 ||y%100!=0))
		{
			printf("\ngiven year is a leap year");
		}
		else {
			printf("given year is not leap year\n");
		}
		// year work ended

	return EXIT_SUCCESS;
}
