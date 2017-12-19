#include<stdio.h>
int main()
{
int n,count=0;
printf("\n enter the number");
scanf("%d",&n);
while(n)
{
n=n/10;
count++;
}
printf("\n %d",count);
return 0;
}
