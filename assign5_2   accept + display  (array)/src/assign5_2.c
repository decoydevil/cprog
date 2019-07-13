/*
 ============================================================================
 Name        : assign5_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void prntar(int arr[]);
//void dispar(int arr[5]);


int main(void)
{

	int i,arr[5]; //,*r
	//r=&arr[0];
	printf("enter 5 values for array\n");

	printf("arr=%d &arr=%u &arr[0]=%u arr[0]=%d	\n",arr,&arr,&arr[0],arr[0]);


	prntar(&arr[0]); //tip - can pass address of 1st array element.

	dispar(arr);   //tip - or can pass the array address by its name.
	/*for(i=0;i<5;i++)
	{
	printf("enter 5 values for array",arr[i]);
	}*/




	/*for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		printf("%d\n",arr[i]);
	}
	//printf("\n%d\t%u\t%u\t%u\t%u",*r,&r,r,arr[0],&arr[0]);*/



	return 0;
}



void prntar(int arr[5])
{
	int i;

	printf("\n Specify array elements please...\n");
		for(i=0;i<5 ;i++)
		{
			scanf("%d",&arr[i]);
		}

}


void dispar(int arr[5])
{
	int i;
	int *r;
	r=&arr[0];
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
	}
}
