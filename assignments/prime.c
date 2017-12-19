#include<stdio.h>
int main()
{
int n,i,j,flag;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=2;j<=i/2;j++)
{
if(i%j==0)
flag=1;
else
flag=0;
}
}
if(flag==0)
printf("\n prime");
else
printf("\n not prime");
return 0;
}
