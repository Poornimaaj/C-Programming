#include <stdio.h>
int main()
{
   char s[10];
   int i,l,count=0;
   scanf("%s",s);
   l=strlen(s);
   for(i=0;i<l;i++)
   {
     if(s[i]>='0' && s[i]<='9')
     count++;
   }
   if(count==l)
    printf("yes");
   else
   printf("no");

    return 0;
}
