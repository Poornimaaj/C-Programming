#include<stdio.h>
int main() 
{
    int n,a[10],i,j,t;
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
        if((a[i]-a[i+1]==-1)||(a[i]-a[i+1]==0))
        {
            printf("%d",a[i+1]);
        }
    }
    return 0;
}
