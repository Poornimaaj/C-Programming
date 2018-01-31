#include <stdio.h>

int main()
{
   int i,j,l,h,flag=0,count=0;
   scanf("%d %d",&l,&h);
   for(i=l;i<=h;i+2)
   {
       for(j=2;j<=i/2;j++)
       {
           if(i%j!=0)
           
               flag=1;
               else
               flag=0;
           }
           if(flag==1)
           count++;
       }
   
printf("%d",count);
    return 0;
}


