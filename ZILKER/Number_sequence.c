#include <stdio.h>

int main()
{
  int n,a[1000],i,j,count=1,k=0,t,b[10];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j++)
      {
          if(a[i]>a[j])
          {
              t=a[i];
              a[i]=a[j];
              a[j]=t;
          }
      }
  }
  for(i=0;i<n;i++)
  {
      if(a[i]-a[i+1]==-1)
      count++;
      else
      {
        b[k]=count;
        k=k+1;
        count=1;
      }
  }
 for(i=0;i<k;i++)
 {
     for(j=i+1;j<k;j++)
     {
         if(b[i]>b[j])
         {
         t=b[i];
         b[i]=b[j];
         b[j]=t;
         }
     }
 }
printf("%d",b[k-1]);

    return 0;
}
