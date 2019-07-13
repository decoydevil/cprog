/*
 ============================================================================
 Name        : assign4_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int oper(int,int,char);
int main(void) {
int a,b,x;
//float x;
char c;
printf("enter two numbers which is to be operated\n");
scanf("%d%d",&a,&b);
printf("enter the operation which is to be held\n");
scanf("%*c %c",&c);
printf("entered number and operation are %d,%d,%c\n ",a,b,c);

x= oper(a,b,c);
printf("result returned is %d",x);
//printf("result returned is %lf",x);
	return EXIT_SUCCESS;
}

int oper(int f,int g,char h)
{
	int x=0; //float x=0;
	switch(h)
	{
	case '+':
		x=f+g;
		printf("addition operation is held\n");
		break;
	case '-':
		x=f-g;
		printf("subtraction operation is held\n");
		break;
	case '*':
		x=f*g;
		printf("product operation is held\n");
		break;
	case '/':
		x=f/g; //x=(float) f/ (float)g;
		printf("division operation is held\n");
		break;
	case '%':
		x=f%g;
		printf("modulus operation is held\n");
		break;
	default:
		printf("operation not valid\n");
		break;
	}
	return x;
}
