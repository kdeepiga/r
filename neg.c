#include<stdio.h>
int main()
{
int n;
printf("\nEnter the number");
scanf("%d",&n);
if(n<0)
{
printf("\n it is negative");
}
else if(n>0)
{
printf("It is positive");
}
else
printf("It is zero");
return 0;
}
