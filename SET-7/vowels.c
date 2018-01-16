#include <stdio.h>
#include<string.h>

int main()
{
   char s[100];
   int l,i,count=0;
   scanf("%s",s);
   l=strlen(s);
  
   
   for(i=0;i<l;i++)
   {
       if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
      count++;
      else
      continue;
   }
   if(count>0)
   printf("yes");
   else
   printf("no");
       
    return 0;
}


