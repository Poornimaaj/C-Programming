#include <stdio.h>
#include<string.h>
int main()
{
   char s[100];
   int l,count=0,c,i;
   scanf("%s",s);
   l=strlen(s);
   
   for(i=0;i<l;i++)
   {
       if(s[i]>='0' && s[i]<='9')
       {
       count++;
       flag=1;
       }
       else
       flag=0;
   }
   if(flag==1)
      printf("%d",count);
   else
      printf("0");

    return 0;
}


