#include <stdio.h>

int main()
{
   int a[3][3],i,j,n,m,p,sum=0,sum1=0;
   scanf("%d %d",&n,&m);
   if(n==m)
   {
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
            scanf("%d",&a[i][j]);
            if(i==j)
            sum=sum+a[i][j];
       }
   }
   
   for(i=0,j=n-1;i<n,j>=0;i++,j--)
   {
           sum1=sum1+a[i][j];
      
   }
   
}
p=sum*sum1;
printf("%d",p);
   
    return 0;
}


