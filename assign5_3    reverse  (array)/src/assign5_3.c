	/*
 ============================================================================
 Name        : assign5_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void rev(int arr[4]);
void getar(int arr[4]);

int main(void)

{
	int x,arr[4];		//={1,2,3,4,5,6};
	printf("array is initialised as \n");



		getar(&arr[0]);


		rev(arr);

		for(x=0;x<4;x++)
		{
			printf("\n%d\t",arr[x]);
		}
return EXIT_SUCCESS;
}


void getar(int arr[4])
{
	int i;

	printf("\n Specify array elements please...\n");
		for(i=0;i<4 ;i++)
		{
			scanf("%d",&arr[i]);
			printf("%d",arr[i]);
		}

		printf("\n");

}

void rev(int arr[4])
{
	int x,i;
	int *r;
	r=&arr[0];



	//printf("\n%d %d %u %u %u\n",*r,a[0],&a[0],r,&r);
	//printf("\n%d %d %d %d ",*r,*(r+1),*(r+2),*(r+3));

	for(i=0;i<2;i++)
	{

		/*x=arr[i];
		arr[i]=arr[3-i];
		arr[3-i]=x;*/



		*(r+i)=*(r+i)+*((r+3)-i);
		*((r+3)-i)=*(r+i)-*((r+3)-i);
		*(r+i)=*(r+i)-*((r+3)-i);

		printf("\n%d %d",*(r+i),*((r+3)-i));

		/*arr[i]=arr[i]+arr[3-i];
		arr[3-i]=arr[i]-arr[3-i];
		arr[i]=arr[i]-arr[3-i];
		printf("\n loop executing",arr[i]);*/
	}



}



/*int main(void)
{

	int i,arr[5]; //,*r
	//r=&ar5r[0];
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
	//printf("\n%d\t%u\t%u\t%u\t%u",*r,&r,r,arr[0],&arr[0]);



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
}*/
