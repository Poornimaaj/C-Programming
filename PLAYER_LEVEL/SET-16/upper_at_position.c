#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,k,r,count=0;
    char s[10];
    scanf("%s",s);
    scanf("%d",&r);
    l=strlen(s);
    
    for(i=0;i<l;i++)
   {
      if((i%r)!=0)
      {
          s[i]=s[i]-32;
      }
      else
      s[i]=s[i];
      
       printf("%c",s[i]);
      
       
    }
    
    return 0;
}

