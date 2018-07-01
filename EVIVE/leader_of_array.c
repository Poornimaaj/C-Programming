#include <stdio.h>

int main()
{
    int n,a[n],i,j,count;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
       for(j=i+1;j<n;j++)
       {
           if(a[i]>a[j])
           count++;
       }
        if(count==((n-i)-1))
           printf("%d ",a[i]);
    }
    printf("%d",a[n-1]);

    return 0;
}
