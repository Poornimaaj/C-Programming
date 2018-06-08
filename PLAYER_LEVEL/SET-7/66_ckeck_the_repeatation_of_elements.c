
#include<stdio.h>
int main()
{
   int n,i,j,a[10],k;
   scanf("%d %d",&n,&k);
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       int count=1;
       for(j=i+1;j<n;j++)
       {
           if(a[i]==a[j])
           count++;
           }
           if(count==k)
           {
           printf("%d",a[i]);
           }
   }
   
    return 0;
    
}
