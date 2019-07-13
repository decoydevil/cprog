/*
 ============================================================================
 Name        : stack1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
typedef int ELEMENT;
typedef int BOOL;
#define true 1
#define false 2;


typedef enum {EXIT, PUSH, pop,peek} mop; // enum used for switch case in main


typedef struct // stack allias for structure with array and top for stack
{
	int a[SIZE]; // stack of int
	int top; // will retain index of stack
}Stack; // stack is allias of struc


/*struct Stack
{
	int a[SIZE]; // stack of int
	int top; // will retain index of stack
}s1;*/

mop menu_choice()
{
	mop choice;
	printf("\nselect from followin operations");
	printf("\n0. exit.");
	printf("\n1. PUSH");
	printf("\n2. pop");
	printf("\n3. peek");
	scanf("%d",&choice);
	return choice;
}

void init(Stack *s1)
{
s1->top=-1;
}


BOOL if_empty(const Stack *s1)
{
	if((s1->top)!=-1)
		{return 1;}
}

BOOL if_full(const Stack *s1)
{
		return (s1->top)<SIZE-1 ? true :false;
}

int main(void){

	mop choice;

	Stack s1;
	ELEMENT ele;
	init(&s1);

	if(choice>0)
	{
		printf("menu choice called and returned %d",choice);
	}

	while((choice=menu_choice ())!=EXIT)
	{
		switch(choice)
		{
		case EXIT:
		{
			printf("/n exit option was selected");
			break;
		}
		case PUSH:
				{
					printf("/n push option was selected");
					if((if_full(&s1)))
				}
				break;
		case pop:
				{
					printf("/n pop option was selected");
					break;
				}
		case peek:
				{
					printf(" /n peek option was selected");
					break;
				}


		}
	}




	return EXIT_SUCCESS;
}
