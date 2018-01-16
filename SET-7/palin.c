#include <stdio.h>
#include<string.h>

int main()
{
   char s[100],a[100];
   int l,i,j,count=0;
   scanf("%s",s);
   l=strlen(s);
   j=0;
   for(i=l-1;i>=0;i--)
   {
      a[i]=s[j];
      j=j+1;
   }
   
   for(i=0;i<l;i++)
   {
       if(s[i]==a[i])
      count++;
       else
       continue;
       
   }
   if(count==l)
    printf("yes");
    else
    printf("no");
    
    return 0;
}

