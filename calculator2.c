#include<stdio.h>
void main()
{
	int n,i,s=0,c=0;
	printf("Enter the number=>");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			c=c+1;
		}
	}
	if(c<=1)
	{
		printf("%d is prime no.",n);
	}
	else
	{
		printf("%d is not a prime no.",n);
	}
}

