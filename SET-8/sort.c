#include <stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int l,i,j,count=0,t;
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(s[i]>s[j])
            {
                t=s[i];
                s[i]=s[j];
                s[j]=t;
            }
        }
        
    }
    printf("%s",s);
            
        
            
    return 0;
}
