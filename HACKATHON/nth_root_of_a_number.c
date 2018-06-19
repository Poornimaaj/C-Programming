#include<stdio.h>
#include<math.h>
int main()
{
    int n,n1,i,k,j,l,m=-1;
    scanf("%d %d",&n,&n1);
    for(i=1;i<n1/2;i++)
    {
        k=1;
        for(j=1;j<=n;j++)
        {
            k=k*i;
        }
            if(k==n1)
            {
                m=i;
                l=1;
            }
        
    }
    if(l==1)
    printf("%d",m);
    else
    printf("-1");
    return 0;
}
