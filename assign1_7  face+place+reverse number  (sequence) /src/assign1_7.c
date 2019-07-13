/*
 ============================================================================
 Name        : assign1_7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int x,a,b,c,d,z;
printf("enter a number\n");
scanf("%d",&x);
z=x;
a=x%10;
x=x/10;
b=x%10;
x=x/10;
c=x%10;
x=x/10;
d=x%10;
printf("%d\t%d\t%d\t%d\n",d,c,b,a);
printf("%d=%d+%d+%d+%d\n",z,d*1000,c*100,b*10,a);
printf("%d%d%d%d",a,b,c,d);
}
