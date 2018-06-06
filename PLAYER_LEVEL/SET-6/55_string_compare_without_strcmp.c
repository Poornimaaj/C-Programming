#include <stdio.h>
#include<string.h>

int main()
{
	char s[100],s1[100];
	int i,j,l,l1,count=0;
	scanf("%s",s);
	scanf("%s",s1);
	l=strlen(s);
	l1=strlen(s1);

	if(l==l1)
	{
	    for(i=0;i<l;i++)
	    {
	        if(s[i]>='A' && s[i]<='Z')
	        s[i]=s[i]+32;
	        else if(s1[i]>='A' && s1[i]<='Z')
	         s1[i]=s1[i]+32;
	    }
	  for(i=0,j=0;i<l,j<l;i++,j++)
	  {
	          if(s[i]==s1[j])
	          count++;
	      }
	  }
	

	if(count==l)
	printf("yes");
	else
	printf("no");
	return 0;
}
