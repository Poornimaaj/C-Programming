#include<stdio.h>
int main()
{
 int n,a[10],min,m1,i,sum=0;
 
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 sum=sum+a[i];
 }
 
 min=a[0];
 for(i=0;i<n;i++)
 {
 if(a[i]<min)
{
 min=a[i];
 }
}
m1=sum-min;
 printf("%d",m1);
 return 0;
}


 
