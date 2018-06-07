#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    printf(" ");
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=i;k++)
        {
            printf(" ");
        }
        for(j=i;j<=n;j++)
        {
            printf("%d",j);
            printf(" ");
        }
        printf("\n ");
    }
    for(i=1;i<n;i++)
    {
        for(k=i;k<n;k++)
        {
            printf(" ");
        }
        for(j=n-i;j<=n;j++)
        {
            printf("%d",j);
            printf(" ");
        }
        printf("\n ");
    }
    return 0;
}
