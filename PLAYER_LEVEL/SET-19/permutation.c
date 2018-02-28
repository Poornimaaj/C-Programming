#include <stdio.h>

int main()
{
  int n,p=1,i,a[10],p1=1;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  p1=p1*a[i];
  }
  printf("%d",p1);
  while(n>0)
  {
      p=p*n;
      n--;
  }
  
  
  
  if(p1-p==0)
  
      printf("\n 0");
  else
  printf("\n 1");
    return 0;
}


