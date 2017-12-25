#include <stdio.h>
#include<string.h>
int main()
{
   int a,b;
   scanf("%d %d",&a,&b);
   if(a!=0)
   {
       a=a+b;
       b=a-b;
       a=a-b;
   }
   printf("%d %d",a,b);
    return 0;
}
