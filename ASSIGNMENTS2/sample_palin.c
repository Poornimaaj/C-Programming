
#include <stdio.h>

int main()
{
   int n,i,j,s,k,b1=0,a[i],b[i];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=1;i<=n;i++)
   {
       s=a[i];
       j=0;
        while(s!=0)
       {
           b[j]=s%10;
           s=s/10;
           j=j+1;
           printf("%d",b[j]);
       }
       
      
       
       for(k=0;k<j;k++)
           b1=b1+(b[k]*10^(j-(k+1)));
           if(b1==a[i])
           printf("/n %d is a palindrome",b1);
           else
           printf("\n %d is not a palindrome",b1);
   }

    return 0;
}
