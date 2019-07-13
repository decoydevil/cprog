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
void sort(double a[],int n);
void display(double a[],int n);

int main(void) {

	double arr[5];
	input(arr,5);
	sort(arr,5);
	display(arr,5);
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
void sort(double a[],int n)
{
int i,j;
double t;
for(i=0;i<n-1;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
}

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
