#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,l;
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        s[i]=s[i]+3;
        printf("%c",s[i]);
    }
    return 0;
}
