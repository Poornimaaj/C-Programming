
#include <stdio.h>
#include<string.h>
int main()
{
  char s[100];
  int i,j,l,k;
  gets(s);
  for(i=0;s[i]!='\0';i++)
  {
      if(s[i]!=' ')
      {
      s[j++]=s[i];
      }
      
  }
  s[j]='\0';
  l=strlen(s);
  for(k=0;k<l;k++)
  {
      if(k%2==0)
      {
          s[k]=s[k]-32;
      }
  }
  printf("%s",s);
    return 0;
}
