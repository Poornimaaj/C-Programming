#include<stdio.h>
#include<string.h>
int main()
{
    char s[10];
    int l,count=0;
    scanf("%s",s);
    l=strlen(s);
    for(int i=0;i<l;i++)
    {
    if(s[i]>='0' && s[i]<='9')
    count++;
    }
    if(count>0)
    printf("true");
    else
    printf("false");
    return 0;
}
