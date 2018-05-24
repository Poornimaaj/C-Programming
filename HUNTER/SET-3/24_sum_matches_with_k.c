#include<stdio.h>
int main()
{
    int n,a[10],count=0,i,k,j;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
           if(a[i]+a[j]==k)
           count++;
           
       }
      
    }
    if(count>=1)
    {
    printf("Yes");
    }
    else
    {
    printf("No");
    }
    return 0;
}
