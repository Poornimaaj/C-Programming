#include <stdio.h>

int main()
{
   int i,j,k,l,n,n1;
   scanf("%d",&n);
   n1=(n*2)-1;
   for(i=0;i<n1;i++)
   {
      
       printf("\n");
       for(k=0;k<i;k++)
        if((n-k)>0)
       {
       printf("\t%d",n-k);
       }
       for(j=i;j<n1-i;j++)
       if((n-i)>0)
       {
       printf("\t%d",n-i);
       }
       for(l=n1-i;l<n1;l++)
       if(n-((n1-l)-1)>0)
       {
       printf("\t%d",n-((n1-l)-1));
       }
   }

    return 0;
}
