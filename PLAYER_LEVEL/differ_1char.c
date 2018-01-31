#include <stdio.h>
#include<string.h>
int main()
{
   int i,j,l,l1,count=0;
   char s1[100],s2[100];
   scanf("%s %s",s1,s2);
   l1=strlen(s1);
   l=strlen(s2);
   if(l==l1)
   {
   for(i=0;i<l1;i++)
   {
     if(s1[i]!=s2[i])
     count++;
   }
   if(count==1)
   
       printf("yes");
   
   else
   printf("no");
   }
   else
   printf("no");

    return 0;
}


