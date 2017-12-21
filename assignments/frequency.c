#include <stdio.h>

#include<stdio.h>
#include<string.h>
int main()
{
    char s[10];
    int i,j,l;
    printf("\n enter the string");
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        int count=1;
        for(j=i+1;j<l-1;j++)
        {
            if(s[i]==s[j])
            s[j]='r';
            count++;
        }
        printf("%s character is present %d times",s[i],count);
    }
    return 0;
}
