#include<stdio.h>

void main()
{
	int a,b,r,s;
	while(1)
{
	
	printf("\nEnter the 1st number =>");
	scanf("%d",&a);
	printf("\nEnter the 2nd number =>");
	scanf("%d",&b);
	if(b>a)
	{
		a=a+b;
		b=a-b;
		a=a-b;
	}
	while(b!=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	if(a==1)
	{
		printf("\nTwo numbers are co-prime");
	}
	else if(a!=1)
	{
		printf("\nTwo numbers are not co-prime");
	}
	printf("\nPress 0 to exit >>");
	scanf("%d",&s);
	if(s==0)
	{
		break;
	}
}
}
