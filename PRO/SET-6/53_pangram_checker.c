#include<stdio.h>
void main()
{
    char s[100];
    int i,used[26]={0},total=0;
    gets(s);
     
    for(i=0;s[i]!='\0';i++)
    {
        if('a'<=s[i] && s[i]<='z')
        {
            total=total+(!used[s[i]-'a']);
            used[s[i]-'a']=1;
        }
        else if('A'<=s[i] && s[i]<='Z')
        {
            total=total+(!used[s[i]-'A']);
            used[s[i]-'A']=1;
        }
    }
     
    if(total==26)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
