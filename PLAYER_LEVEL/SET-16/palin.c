#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,count=0;
    char s[100];
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]=='a'||s[i]=='b')
        count++;
    }
 
    if(count==l)
    printf("yes");
    else if(count==(l-1))
    printf("yes");
    else
    printf("no");
    return 0;
}

