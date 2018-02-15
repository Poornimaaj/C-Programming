#include <stdio.h>

int main()
{
    int a,b,p=1,sum=0,i,r,c;
    
    scanf("%d %d %d",&a,&b,&c);
    for(i=0;i<b;i++)
    {
        p=p*a;
    
    }
    r=p%c;
    printf("%d",r);
    return 0;
}


