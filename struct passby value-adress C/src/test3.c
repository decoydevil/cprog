/*
 ============================================================================
 Name        : test3.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


struct Emp
{
	int empno;
	int name;
	int sal;

};

void init_struct(struct Emp *ptrr);
void Accept(struct Emp *ptr);
void Display(struct Emp *ptr2);

int main(void)
{
	struct Emp e1;
	//struct Emp *ptr=&e1;
	init_struct(&e1);
	Accept(&e1);
	Display(&e1);

	return EXIT_SUCCESS;
}

void init_struct(struct Emp *ptrr)
{
ptrr->empno=0;
ptrr->name=0;
ptrr->sal=0;
}

void Accept(struct Emp *ptr)
{
scanf("%d %d %d",&ptr->empno,&ptr->name,&ptr->sal);
printf("%d %d %d",ptr->empno,ptr->name,ptr->sal);
}

void Display(struct Emp *ptr2)
{
	printf("emono is %d\n",ptr2->empno);
	printf("emono is %d\n",ptr2->name);
	printf("emono is %d\n",ptr2->sal);

}
