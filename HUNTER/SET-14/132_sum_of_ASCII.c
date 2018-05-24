#include<stdio.h>
#include<string.h>
int main()
{
    char s[10];
    int i,sum=0,l;
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        sum=sum+s[i];
    }
    printf("%d",sum);
}
