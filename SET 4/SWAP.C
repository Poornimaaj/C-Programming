#include <stdio.h>
#include<string.h>
int main()
{
   int a,b,t;
   scanf("%d %d",&a,&b);
   if(a!=0)
   {
       t=a;
       a=b;
       b=t;
   }
   printf("%d %d",a,b);
    return 0;
}
