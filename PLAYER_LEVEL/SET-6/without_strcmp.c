#include<stdio.h>
int main()
{
    char s[10],s1[10];
    int i,count=0,t=0,count1=0;
    scanf("%s",s);
    scanf("%s",s1);
    for(i=0;s[i]!='\0';i++)
    {
       count++; 
    }
    for(i=0;s1[i]!='\0';i++)
    {
       count1++; 
    }
    if(count==count1)
    {
        for(i=0;i<count;i++)
        {
        if(s[i]==s1[i])
        t++;
        }
    }
    if(t==count)
    printf("yes");
    else
    printf("no");
}
