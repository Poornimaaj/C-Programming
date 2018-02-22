#include<stdio.h>
#include<string.h>
int main()
{
    
      int n,n1,i=0,j,k,a[10],b[10],c[10],t,g;
      scanf("%d %d",&n,&n1);
      while(n)
      {
          n=n/2;
          n=n%2;
          a[i]=n;
          i++;t++;
      }
      while(n1)
      {
         n1=n/2;
          n1=n%2;
          a[j]=n;
          j++;g++;  
      }
      for(i=t;i>=0;i--)
      {
        b[i]=a[i];  
      }
      for(j=g;j>=0;j--)
      {
          b[j]=a[j];
      }
      for(k=0;k<t;k++)
      {
          
         c[k]=b[i]&&b[j];
         
        printf("%d",c[k]);  
      }
    
    
    return 0;
}

