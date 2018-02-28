#include <stdio.h>

int main()
{
   int n,i,max,a[10],count=0,count1=-1,j;
   max=a[0];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=1;i<n;i++)
   {
       if(a[i]>max)
       max=a[i];
   }
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(a[i]==a[j])
           count++;
       }
       
   }
   for(i=0;i<n;i++)
   {
   if(a[i]<max)
       count1++;
   }
   
   printf("%d",count1-count);
   

    return 0;
}


