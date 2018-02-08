#include <stdio.h>
#include<string.h>
int main()
{
   char s[100];
   int i,l,count=0,count1=0;
   gets(s);
   l=strlen(s);
   for(i=0;i<l;i++)
   {
       if(s[i]=='(')
       count++;
       else if(s[i]==')')
       count1++;
   }
   if(count==count1)
   printf("yes");
   else
   printf("no");
    return 0;
}


