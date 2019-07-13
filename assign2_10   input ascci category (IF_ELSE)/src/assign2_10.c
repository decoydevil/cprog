/*
 ============================================================================
 Name        : assign2_10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x=0;
	char c;
	printf("enter any character from keyboard\n");
	scanf("%c",&c);
	printf("character value of the character entered is %d\n",c);



	if(c>47 && c<58)
	{
			printf("character entered is a digit\n");
			++x; // number
	}


	if(c>64 && c<91)

	{
			printf("character entered is a upper case letter\n");
			++x;  //upper case
	}



	if(c>96 && c<123)

		{printf("character entered is a lower case letter\n");
		++x;
		}  															//lower case


	if((c>64 && c<91) || (c>96 && c<123))
	{
		printf("ALPHABET : is a letter (65 to 90 or 97 to 122)\n");
		++x;
	}  																// Alphabet


	if(c<64)   														//special cases
		{
			if(c==32)
			{
				printf("character entered is space\n");
				++x;
			}
			if(c==9)
			{
				printf("character entered is a tab space\n");
				++x;
			}
			if(c==13)
			{
				printf("character entered is carriage return\n");
				++x;
			}
			if(c==10)
			{
				printf("character entered is new line sequence\n");
				++x;
			}

		}
	if((c>90 && c<97))												// between case
		{
		printf("character not listed in given options\n");
		++x;
		}
	if(x==0)
			{
				printf("not listed in given options\n");
			}

	if(c>122)
	{
		printf("2nd not listed in given options\n");

	}
	return EXIT_SUCCESS;
}


/*10. Write a program to accept a character c and display category of the input character.
ALPHABET
: c is a letter (65 to 90 or 97 to 122)
UPPERCASE
: c is an uppercase letter (65 to 90)
LOWERCASE : c is a lowercase letter (97 to 122)
DIGIT
: c is a digit (48 to 57)
SPACE
: c is a space(32), tab(9), carriage return(13), new line(10)
OTHER
: Not listed above*/
