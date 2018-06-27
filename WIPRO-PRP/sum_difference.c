
#include <stdio.h>

int main()
{
    int n,c1,c2,i;
    scanf("%d",&n);
    c1=n;
    c2=n;
        for(i=1;i<n;i++)
        {
           if(i%2==0)
           {
               c1=c1+i;
               c2=c2-i;
           }
               else
               {
               c1=c1-i;
               c2=c2+i;
               }
               
               
               
      
    }
    printf("%d %d",c1,c2);
   

    return 0;
}
