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
           
       s[i]=s[i+1];
       
       printf("%c",s[i]);
       
       }
       else
       printf("%c",s[i]);
   }
    return 0;
}


