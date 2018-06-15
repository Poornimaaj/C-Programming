
#include <stdio.h>
#include<string.h>
int main()
{
   char s[100];
   int l,i,j,k;
   scanf("%s",s);
   l=strlen(s);
   for(i=0;i<l;i++)
   {
       for(j=i+1;j<l;j++)
       {
           if(s[i]<s[j])
           {
               for(k=j;k<l;k++)
               {
                   printf("%c",s[k]);
                }
                break;
           }
          
       }
     break;
   }
   

    return 0;
}
