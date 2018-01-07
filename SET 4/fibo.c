#include <stdio.h>
#include<string.h>
int main()
{
   int x=0,y=1,z,i,n;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       printf("%d ",x);
       z=x+y;
      x=y;
      y=z;
   }
   
    return 0;
}
