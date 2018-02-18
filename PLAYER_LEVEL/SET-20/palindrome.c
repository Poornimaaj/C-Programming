#include <stdio.h>
#include<string.h>
int main()
{
   char s[100];
   int i,l,j,count=0;
   scanf("%s",s);
   l=strlen(s);
   for(i=0,j=l-1;i<l,j>=0;i++,j--)
   {
      if(s[i]!=s[j])
      count++;
   }
   if(count==2)
   printf("yes");
   else
   printf("no");
    return 0;
}
