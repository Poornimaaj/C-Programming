#include<stdio.h>
int main()
{
    int n,ar[10],i,q,a[5],b[5],gcd,j;
    scanf("%d %d",&n,&q);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
      for(j=0;j<q;j++)
    {
        scanf("%d %d",&a[j],&b[j]);
    }
    for(j=0;j<q;j++)
    {
    for(i=1; i <= a[j] && i <= b[j]; ++i)
    {
        if(a[j]%i==0 && b[j]%i==0)
            gcd = i;
    }
    printf("\n%d", gcd);
    }

    
    return 0;
}
