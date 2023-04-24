#include<stdio.h>

int main()
{
	int a,b,r,s,l,i,x,G;
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
	printf("***Menu***\n1 for GCD \n2 for LCM");
	printf("\nEnter your input >>");
	scanf("%d",&s);
	if(s==1)
	{
		for(i=1;i<=a&&i<=b;++i)
		{
			if(a%i==0&&b%i==0)
			{
				G=i;
			}
		}
		printf("GCD :: %d",G);
	}
	else if(s==2)
	{
		l=b;
		if(a>b)
		{
			l=a;
		}
		while(1)
		{
			if(l%a==0&&l%b==0)
			{
				break;
			}
			l=l+1;
		}
		printf("LCM :: %d",l);
	}
	else if(s>=3)
	{
		printf("Input is wrong...");
	}
	printf("\nPress 0 to exit =>");
	scanf("%d",&x);
	if(x==0)
	{
		break;
	}
 }
	return(0);
}
