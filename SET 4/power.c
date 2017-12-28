#include<stdio.h>
int main()
{
    int n,p=1,i,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        p=2*p;
    
    if(n==p)
    {
        flag=1;
    }
    }
    if(flag==1)
    printf("yes");
    else
    printf("no");
    
    
    return 0;
}


