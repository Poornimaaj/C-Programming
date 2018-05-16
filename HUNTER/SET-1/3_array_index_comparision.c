#include <stdio.h>

int main()
{
    int n,i,j,a[10],t,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
            if(a[i]==i)
               printf("%d ",a[i]);
            else
              count++;
        
    }
    if(count>1)
     printf("'-1'");
    return 0;
}
