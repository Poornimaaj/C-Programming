#include <stdio.h>

int main()
{
  int c,s,n,reverse=0,reverse1=0;
  scanf("%d",&n);
  c=n*n*n;
  s=n*n;
  while(c>0)
  {
     reverse = reverse * 10;
      reverse = reverse + c%10;
      c       = c/10;

  }
  printf("%d",reverse);
   while(s>0)
  {
     reverse1 = reverse1 * 10;
      reverse1 = reverse1 + s%10;
      s      = s/10;

  }
  printf("%d",reverse1);
  
  

    return 0;
}
