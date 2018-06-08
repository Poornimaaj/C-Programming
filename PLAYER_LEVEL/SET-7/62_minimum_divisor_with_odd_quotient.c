
#include <stdio.h>

int main()
{
   int n,i,j=0,k,l,t,a[10];
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    if((n%i==0)&&((n/i)%2!=0))
    {
        a[j]=i;
        j++;
    }
   }
   for(k=0;k<j;k++)
   {
       for(l=k+1;l<j;l++)
       {
           if(a[k]<a[l])
           {
               t=a[k];
               a[k]=a[l];
               a[l]=t;
           }
       }
   }
   printf("%d",a[k-1]);
    return 0;
}
