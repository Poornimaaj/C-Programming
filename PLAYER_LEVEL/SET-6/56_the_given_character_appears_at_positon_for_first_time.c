#include<stdio.h>
int main()
{
    char s[10];
    char c;
    int i,count=0;
    scanf("%s %c",s,&c);
    
    for(i=0;s[i]!='\0';i++)
    {
       count++; 
    }
        for(i=0;i<count;i++)
        {
        if(s[i]==c)
        {
        printf("%d",i+1);
        break;
        }
        }
   return 0;
}
