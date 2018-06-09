
#include <stdio.h>

int main()
{
   int n,f=1,i;
   scanf("%d",&n);
   for(i=n;i>0;i--)
   {
       f=f*i;
   }
   printf("%d",f);

    return 0;
}
