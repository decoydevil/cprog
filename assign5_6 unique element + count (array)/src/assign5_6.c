/*
 ============================================================================
 Name        : assign6_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void input(double a[],int n);
int remdup(double a[],int n);
void display(double a[],int n);

int main(void) {
int x;
	double arr[5];
	input(arr,5);
	printf("values passed to display  ");
	display(arr,5);

	printf("values passed to func remdup  ");
	x=remdup(arr,5);
	printf("values recieved from func remdup %d ",x);
	x=5-x;
	printf("\nduplicate values in array are %d ",x);
	printf("\nunique array elements are  ");
	display(arr,5-x);
	return 0;

}


void input(double a[],int n)
{
	int i;
	printf("enter %d elements ",n);
	for(i=0;i<n;i++)
	{
		scanf("%lf",&a[i]);
	}
}
int remdup(double a[],int n)		// 1 2 1 1 3
{
int i,j;
int x=0,c=0;
double t;
for (i=0;i<n-1;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]==a[j])
		{printf(" \n values same at %d %d",i,j);
			x++;
		}

		if(x!=0 && a[i]!=a[j])
			{
				printf(" \n values swapping at %d %d",i,j);
				a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
				x=0;
				i=0;
				j=i+1;
				printf("\n swapping is done and reinitiating ");
			}

	}

}
printf("\n 2nd for initiating for array unique");
for (i=0;i<n-1;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]==a[j])
		{printf("\n a is sorted, now exitting with less elements ");
		printf("\n unique elements in array are %d ",i+1);
			display(a,i+1);
			//break;
			return i+1;
		}
	}
}




/*
  *for(i=0;i<n-1;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
 */


}
void display(double a[],int n)
{
	int i;
		for(i=0;i<n;i++)
		{
		printf("%lf",a[i]);
		printf("\n");
		}
}
