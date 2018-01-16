#include <stdio.h>
#include<string.h>

int main()
{
  char s[100];
  int l,i,t;
  scanf("%s",s);
  l=strlen(s);
  t=l/2;
  if(l%2==0)
  {
     s[t-1]='*';
          s[t]='*';
          printf("%s",s);   
      
  }
  else
 {
       s[t]='*';
        printf("%s",s);
      }
   
  
  return 0;
}


