#include <stdio.h>

int main()
{
 int n, i, count = 0;

 scanf("%d",&n);

 for(i=0;i<=n/2;i++)
 {
 if(n % i == 0 )
  {
   count = 1;
   break;
  }

 }

 if(count == 0)
  printf("no");
 else
  printf("yes");
 
 return 0;
}


