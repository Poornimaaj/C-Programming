
#include <stdio.h>

int main()
{
    int i,j,k,l,m,n,f,t,len;
    char a[10];
    printf("\n enter the string");
    scanf("%s",a);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(a[i]!=a[j])
            k++;
            
        }
    }
    if(k==0)
    printf("%d",a[i]);
    else if(k==1)
    {
        for(i=0;i<len;i++)
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    else if(k==len)
    {
        int f=1;
        while(k>0)
        {
        f=f*k;
        k--;
        }
        for(i=0;i<f;i++)
        {
            for(j=i+1;j<f;j++)
            {
                for(k=j+1;k<f;k++)
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=a[k];
                    a[k]=t;
                }
            }
            printf("%d",a[i]);
        }
    }
    return 0;
}
