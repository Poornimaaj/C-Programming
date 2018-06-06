#include<stdio.h>
int main()
{
    char s[10],s1[10];
    
    int i,j,count=0;
    scanf("%s",s);
    scanf("%s",s1);
    int l=strlen(s);
    int l1=strlen(s1);
    for(i=0;i<l;i++)
   {
       for(j=0;j<l1;j++)
       {
         if(s[i]==s1[j])
         count++;
       }
   }
   if(count>0)
   printf("yes");
   else
   printf("no");
    
   return 0;
}
