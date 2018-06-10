
#include <stdio.h>

int main()
{
    int a[10],i,j,k=0,d,t,l,m,b[10],n;
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
        for(j=i+1;j<n;j++)
        {
            d=a[j]-a[i];
            b[k]=d;
            k++;
        }
    }
    for(l=0;l<k;l++)
    {
        for(m=l+1;m<k;m++)
        {
            if(b[l]>b[m])
            {
                t=b[l];
                b[l]=b[m];
                b[m]=t;
            }
        }
    }
    printf("%d",b[l-1]);
    return 0;
}
