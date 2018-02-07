#include <stdio.h>
#include<string.h>
int main()
{
   char s[100];
   int i,l,flag=0;
   gets(s);
   l=strlen(s);
   for(i=0;i<l;i++)
   {
       if(s[i]==' ')
       {
           l--;
       s[i]=s[i+1];
       printf("%s",s);
       
       }
   }
    return 0;
}


