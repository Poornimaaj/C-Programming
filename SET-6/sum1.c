#include<stdio.h>
int main()
{
int n,max=0,i,a[10];
max=a[0];

for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]>max)
max=a[i];
}
printf("%d",max);
return 0;
}
