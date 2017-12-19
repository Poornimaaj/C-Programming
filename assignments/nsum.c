#include<stdio.h>
int main()
{
int n,sum=0;
printf("\n enter the number");
scanf("%d",&n);
while(n>0)
{
sum=sum+n;
n--;
}
printf("%d",sum);
return 0;
}
