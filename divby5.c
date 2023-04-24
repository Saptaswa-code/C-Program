#include<stdio.h>

void main()
{
	int i,x,y;
	printf("enter a number->");
	scanf("%d",&x);
	printf("enter another number->");
	scanf("%d",&y);
	i=x;
	while(i<=y)
	{
		if(i%5==0&&i%7!=0)
		{
			printf("\n%d",i);
		}
		i=i+1;
	}
	
}
