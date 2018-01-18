#include<stdio.h>
#include<string.h>
int main()
{
	int n,l,p,i;
	char s[100];
    scanf("%s",s);
	scanf("%d",&n);
	l=strlen(s);
	p=l-n;
	for(i=p;i<l;i++)
	{
		printf("%c",s[i]);
	}
	return(0);	
}
