
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
float a,b,c,s,p;
double area,A;
printf("\n enter values for sides of triangle a,b,c \n ");
scanf("%f %f %f",&a,&b,&c);
p=a+b+c;
printf(" \n perimeter of triangle is %f \n",p);
s=p/2;
printf("value of half of permeter that is S/2 is %f\n",s);
area=(s*(s-a)*(s-b)*(s-c));
printf(" area before sqrt %f",area);
A= sqrt(area);
printf("\n Area of triangle is %f \n",A);
	return 0;

}
