#include <stdio.h>
#include<string.h>
int main()
{
   char s1[100],s2[100];
   int i,j,l1,l2,flag;
   scanf("%s %s",s1,s2);
   l1=strlen(s1);
   l2=strlen(s2);
   if(l1==l2)
   {
   for(i=0;i<l1;i++)
   {
      for(j=0;j<l2;j++)
      {
          if(s1[i]>s2[j])
          flag=1;
          else if(s1[i]<s2[j])
          flag=2;
          else
          flag=3;
      }
      
   }
   }
   if(flag==1)
   {
   for(i=0;i<l1;i++)
   printf("%s",s1[i]);
   }
   else if(flag==2)
   {
       for(j=0;j<l2;j++)
   
   printf("%s",s2[j]);
   }
   
   else
   for(i=0;i<l1;i++)
   {
       for(j=0;j<l2;j++)
       {
   
   printf("%s %s",s1[i],s2[j]);
       }
   }
   return 0;
}
   
  

