#include<stdio.h>
int main(void)
{
    int n,k,a[10],i,j,flag=0;
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
            flag=1;
        }
    }
    if(flag==1)
    printf("yes");
    else
    printf("no");
    return 0;
    
}
