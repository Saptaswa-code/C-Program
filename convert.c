#include<stdio.h>

int main()
{
	float x,a,b;
	printf("enter the lenght in cm->");
	scanf("%f",&x);
	a=x/100;
	printf("\n length in metre is %0.1f",a);
	b=x/100000;
	printf("\n length in km is %0.5f",b);
	return(0);
}
