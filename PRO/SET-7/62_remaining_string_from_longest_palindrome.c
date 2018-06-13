#include <stdio.h>
#include<string.h>
int main() 
{
 char s[10];
 int l,n,count=0,i,j,k,p;
 scanf("%s",s);
 l=strlen(s);
 for(i=0;i<l;i++)
 {
     for(j=i+1;j<l;j++)
     {
         if(s[i]==s[j])
         {
             for(p=i,k=j;p<j,k>=i;p++,k--)
             {
                 if(s[i]==s[k])
                 count++;
             }
         }
     }
 }
 n=l-count;
 printf("%d",n);
return 0;
}
