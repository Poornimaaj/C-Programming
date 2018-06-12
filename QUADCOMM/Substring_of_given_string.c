
#include <stdio.h>

int main()
{
   char s[100],s1[50];
   int i,j,count=0,k=0,l=0,b=0;
   scanf("%s",s);
   scanf("%s",s1);
   for(i=0;s[i]!='\0';i++)
   {
       k++;
   }
    for(j=0;s1[j]!='\0';j++)
   {
       l++;
   }
   
   for(i=0;i<k;i++)
   {
       for(j=0;j<l;j++)
       {
           if(s[i]==s1[j])
           count++;
            if(count==l)
            {
            b++;
            break;
            }
       }
   }
   
   if(b>0)
   printf("yes");
   else
   printf("no");
    return 0;
}
