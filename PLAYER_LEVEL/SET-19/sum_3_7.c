#include <stdio.h>

int main()
{
   int n,i,count=0;
   scanf("%d",&n);
   for(i=0;i<=100;i++)
   {
       if((i+3==n)||(i+7==n))
      count++;
      
   }
   if(count>0)
    printf("yes");
    else
    printf("no");

    return 0;
}


