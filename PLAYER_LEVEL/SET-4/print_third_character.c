#include <stdio.h>
#include<string.h>
int main(void) 
{
	char s[30];
	int i,l;
	gets(s);
	l=strlen(s);
	
	for(i=0;i<l;i=i+3)
	{
		printf("%c",s[i]);
	}
	return 0;
}
