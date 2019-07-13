/*
 ============================================================================
 Name        : assign2_12.c
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
while(n!=0)
{
	printf("\nselect from bellow mentioned options\n");
	printf("0. for exit program \n");
	printf("1. check days in a month\n");
	printf("2.check a year to be leap or not\n");

	scanf("%d",&n);

		switch (n)
				{
					case 1:
					printf("enter a month in numerical value\n");
					scanf("%d",&x);
						printf("\nnumber recieved is %d\n",x);
						if(x>12)
						{
						printf("entered month value doesn't exits\n");
						return 0;
						}
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
										break;
										}
									else
										{
										printf("\nmonth has 31 days\n");
											break;}
								}
										if(x==2)
									{
										printf("\nhey its february\n"); // feb month
									}
									break;

				case 2:
						printf("enter a year to be checked\n");
					scanf("%d",&y);
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

												}
										else {
											printf("given year is not leap year cuz is divisible by 100\n");

											}
									}
									else {
										printf("given year is not leap year, not divisible by 4\n");

										}
										if(y<0)
								{
										printf("entered year dosesn't exits");
										return 0;
									}
							break;


				case 0:
					return EXIT_SUCCESS;
					break;





					    default:
				   printf("entered value for case not valid");// code to be executed if n doesn't match any cases}

}
}


return EXIT_SUCCESS;

}
