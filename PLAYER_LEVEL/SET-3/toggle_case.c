#include <stdio.h>
int main()
{
   char s[10];
   int i,l;
   scanf("%s",s);
   l=strlen(s);
   for(i=0;i<l;i++)
   {
     if(s[i]>='a' && s[i]<='z')
     s[i]=s[i]-32;
     else
     s[i]=s[i]+32;
     printf("%c",s[i]);
   }

    return 0;
}
