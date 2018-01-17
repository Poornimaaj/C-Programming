#include<stdio.h>
void main()
{
    int n,result=1,remainder=0;
    scanf("%d",&n);
    while(n!='\0')
    {
        remainder=n%10;
        result=result*remainder;
        n=n/10;
    }
    printf("%d",result);
}
