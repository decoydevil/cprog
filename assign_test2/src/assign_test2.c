#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

typedef enum {EXIT,ACCEPTELEMENTS,DISPLAYELEMENTS,SELECTIONSORT,LINEARSEARCH,BINARYSEARCH}MENUOPERATIONS;
MENUOPERATIONS menu_choice();

void accept_array_elements(int arr[SIZE]);
void display_array_elements(int arr[SIZE]);
int main(void) {
	int arr[SIZE];
	MENUOPERATIONS mchoice;
	while((mchoice=menu_choice())!=EXIT)
	{
		switch(mchoice)
		{
			case ACCEPTELEMENTS:
								accept_array_elements(arr);
								break;
			case DISPLAYELEMENTS:
								display_array_elements(arr);
								break;
		}
	}
	return EXIT_SUCCESS;
}

void accept_array_elements(int arr[SIZE])
{
	int index;
	printf("\n Specify array elements please...\n");
	for(index=0;index<SIZE;index++)
	{
		scanf("%d",&arr[index]);
	}
}

void display_array_elements(int arr[SIZE])
{
	int index;
	printf("\n Display array elements please...\n");
	for(index=0;index<SIZE;index++)
	{
		printf("\n %d %u",arr[index],&arr[index]);
	}
}
MENUOPERATIONS menu_choice()
{
	MENUOPERATIONS mchoice;
	printf("\n 0. Exit");
	printf("\n 1. Accept array Elements");
	printf("\n 2. Display Array Elements");
	printf("\n 3. Sort elements using selection sort");
	printf("\n 4. Search key using Linear Search");
	printf("\n 5. Search key using Binary search");
	scanf("%d",&mchoice);
	return mchoice;
}
