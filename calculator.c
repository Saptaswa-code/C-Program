#include<stdio.h>

void main()
{
	float x,y,z,s,t,n;
	int i;
	t=n;
	while(1)
	{
	printf("\nWant to continue ::");
   scanf("%c",&i);
	if(i==1)
	{
		printf("\n enter the 1st number->");
	   scanf("%f",&x);
	   printf("\n enter the 2nd number->");
	   scanf("%f",&y);
	   printf("***Menu***\n 1 for addition\n 2 for subtraction\n 3 for multiplication\n 4 for division\n");
	   printf("Enter your input->");
	   scanf("%f",&s);
	   while(1)
     {
	   if(s==1)
	   {
		    z=x+y;
		    printf("the result is %f",z);
	   }
	   else if(s==2)
	   {
		    z=x-y;
		    printf("the result is %f",z);
	   }
	   else if(s==3)
	   {
		    z=x*y;
		    printf("the result is %f",z);
	   }
	   else if(s==4)
	   {
		    z=x/y;
		    printf("the result is %f",z);
	   }
	   else if(s>4)
	   {
		    printf("input is wrong");
	   }
	   else if(s==0)
	   {
		    break;
	   }
     }
   }
}
   
}
