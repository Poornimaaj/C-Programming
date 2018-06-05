
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],s1[100];
    int l,l1,i,j,flag=0;
    scanf("%s",s);
    scanf("%s",s1);
    l=strlen(s);
    l1=strlen(s1);
    for(i=0,j=0;i<l,j<l1;i++,j++)
    {
        if(s[i]==s1[j])
        {
        flag=1;
        }
        else
        flag=0;
        if(flag==1)
        printf("%c",s[i]);
        else
        break;
        
       
    }
    return 0;
}
