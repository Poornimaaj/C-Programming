
#include <stdio.h>
#include<string.h>

int main()
{
    char ch[100],ch1[100];
    int l,i;
   gets(ch);
    ch1=strlwr(ch);
    l=strlen(ch);
    
    for(i=0;i<l;i++)
    {
   
    if((ch1[i] >= 'a' && ch1[i] <= 'z')  && (ch1[i] >= '0' && ch1[i] <= '9'))
   
   printf("yes");
   else
   printf("no");
   }
    return 0;
}
