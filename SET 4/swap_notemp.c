#include <stdio.h>
#include<string.h>
int main()
{
   int x,y;
   scanf("%d %d",&x,&y);
   if(a!=0)
   {
       x=x^y;
      y=y^x;
      x=x^y;
   }
   printf("%d %d",x,y);
    return 0;
}
