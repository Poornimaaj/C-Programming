#include <stdio.h>

int main()
{
   int a[3][3],i,j,n,m,p=1,p1=1,sum;
   scanf("%d %d",&n,&m);
   if(n==m)
   {
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
            scanf("%d",&a[i][j]);
            if(i==j)
            p1=p1*a[i][j];
       }
   }
   
   for(i=0,j=n-1;i<n,j>=0;i++,j--)
   {
           p=p*a[i][j];
      
   }
   
}
sum=p+p1;
printf("%d",sum);
   
    return 0;
}


