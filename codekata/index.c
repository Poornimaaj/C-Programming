#include<stdio.h>
int main()
{
int n,max=0,i,a[10];
max=a[0];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("\n %d %d",a[i],i);
}
return 0;
}
