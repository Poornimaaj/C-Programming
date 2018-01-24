#include<stdio.h>
#include<string.h>

void main()
{
	char s[100];
	int l,i;
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
	    if(i==0)
	    {
	    s[0]=toupper(s[0]);
	    }
	    if(s[i]==' ')
	    {
	    s[i+1]=toupper(s[i+1]);
	    }
	    
	}
	printf("%s",s);
		
}
