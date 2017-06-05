#include<stdio.h>
#include <conio.h>
int main()
{
int n;
printf("enter the no");
scanf("%d",&n);
if(n==0)
{
printf("it is zero");
}
else if(n>=0)
{
printf("it is positive number");
}
else if(n<=0)
{
printf("it is negative number");
}
return 0;
}
