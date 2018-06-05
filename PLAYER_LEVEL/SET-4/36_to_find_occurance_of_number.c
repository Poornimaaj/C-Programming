#include<stdio.h>
void main()
{
    int n,k,count=0,n1;
    scanf("%d %d",&n,&k);
    while(n>0)
    {
    n1=n%10;
    n=n/10;
    }
    if(n==k)
    count++;
    else if(n1==k)
    count++;
    printf("%d",count);
}
