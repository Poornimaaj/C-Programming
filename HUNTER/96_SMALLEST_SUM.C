#include <stdio.h>
#include<string.h>
int main()
{
    int n,i,j,sum=0,r;
    scanf("%d",&n);
    for(i=0;i<100;i++)
    {
        while(i>0)
        {
             r= i % 10;
          sum=sum+r;
             i= i/ 10;
         }
         if(i==n)
         printf("%d",i);
    }
    
    return 0;
}
