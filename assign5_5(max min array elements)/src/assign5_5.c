/*
 ============================================================================
 Name        : assign5_4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//int countar(int arr[10]);
int	maxar(int a[10]);

int	minar(int a[10]);
void getar(int a[10]);
int main(void)
{

	int z,y,i;
	int arr[10];
	printf("enter values for array");


	getar(arr);

	//x=countar(&arr[10]);
	y=maxar(arr);
	z=minar(arr);
	printf("\nmax of array is %d",y);

	printf("\nmin of array is %d",z);
	//printf("size of array is %lf",sizeof(int arr[n]));

	return EXIT_SUCCESS;
}


/*int countar(int arr[10])
{
	int x=0,i;
printf("size of arr is %d",sizeof(arr) );

	return x;
}*/


int	maxar(int a[10])
{
	int i=0,x=0;
	x=a[i];
	printf("1st element of a is %d",a[i]);
	for(i=0;i<10;i++)
		{

		if((i+1)<9)
		{
			if(a[i]<a[i+1])
					{
						x=a[i+1];
					}
		}



		}

	return x;
}


int	minar(int a[10])
{
	int i=0,x=0;
	x=a[i];
	printf("1st element of a is %d",a[i]);
	for(i=0;i<10;i++)
		{

		if((i+1)<9)
		{
			if(a[i]>a[i+1])
					{
						x=a[i+1];
					}
		}



		}

	return x;
}


void getar(int a[10])
{
	int i;

	printf("\n Specify array elements please...\n");
		for(i=0;i<10 ;i++)
		{
			scanf("%d",&a[i]);
			printf("%d",a[i]);
		}

		printf("\n");

}
