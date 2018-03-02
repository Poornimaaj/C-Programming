#include <stdio.h>

int main()
{
    
    int a,b,c,s=0;
    scanf("%d %d %d",&a,&b,&c);
    if((a<b+c)&&(b<c+a)&&(c<a+b))
    printf("yes");
    else
    printf("no");
    return 0;
}


