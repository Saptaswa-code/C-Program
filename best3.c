#include<stdio.h>

int main()
{
 int a,b,c,d,min;
 float t;
 a=min;
 printf("Marks of PHYS->");
 scanf("%d",&a);
 printf("Marks of CHEM->");
 scanf("%d",&b);
 printf("Marks of MATH->");
 scanf("%d",&c);
 printf("Marks of COMS->");
 scanf("%d",&d);
  if(a>b)
   min=b;
  else if(b>min)
   min=a;
  if(a>c)
   min=c;
  else if(c>min)
   min=a;
  if(a>d)
   min=d;
  else if(d>min)
   min=a;
   printf("smallest no is %d",min);
   t=(a+b+c+d-min)/3;
   printf("\n the average of top three no is %0.2f",t);
   return 0; 
}
