#include<stdio.h>

int main()
{
	int n;
	float s;
	printf("Enter the current unit->");
	scanf("%d",&n);
	{
		if(n>=0&&n<=50)
		{
			s=n*0.5;
			printf("the bill is %0.2f",s);
		}
		else if(n>=51&&n<=150)
		{
			s=50*0.5+(n-50)*0.75;
			printf("the bill amount is %0.2f",s);
		}
		else if(n>=151&&n<=250)
		{
			s=50*0.5+100*0.75+(n-150)*1.2;
			printf("the bill amount is %0.2f",s);
		}
		else if(n>250)
		{
			s=50*0.5+100*0.75+100*1.2+(n-250)*1.5;
			printf("the bill amount is %0.2f",s);
		}
		return(0);
	}
}
