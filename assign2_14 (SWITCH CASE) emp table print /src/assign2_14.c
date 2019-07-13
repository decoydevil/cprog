/*
 ============================================================================
 Name        : assign2_14.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {



	int id,dn,n;
	char dgn;
		printf("enter Employee Id , Department No, Designation respectively \n");
		scanf("%d%d%*c%c",&id,&dn,&dgn);
		printf("values entered are %d n %d n %c \n",id,dn,dgn);
		printf("Employee with employee id %d ",id);
		switch (dn)
		{
		case 10:
			printf("is working in Marketing ");
			break;
		case 20:
			printf("is working in Management ");
			break;
		case 30:
			printf("is working in Sale ");
			break;
		case 40:
			printf("is working in Designing ");
			break;
		case 50:
			printf("is working in Netowrking ");
			break;
		default:
			printf("Invalid value Service ");
		}


		switch (dgn)
				{
				case 'M':
					printf("department as Manager");
					break;
				case 'S':
					printf("department as Supervisor");
					break;
				case 's':
					printf("department as Security Officer");
					break;
				case 'C':
					printf("department as Clerk");
					break;
				case 'G':
					printf("department as Guard");
					break;
				default:
					printf("department as None ");
				}


	return EXIT_SUCCESS;
}
