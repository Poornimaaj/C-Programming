#include<stdio.h>
int main()
{
    int n,a[10],mul=1,p,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       mul=mul*a[i];
      
    }
    for(i=0;i<n;i++)
    {
         p=mul/a[i];
       printf("%d",p);
    }
    return 0;
}
