#include <stdio.h>
#include<string.h>
int main(void) {
	char s[10];
	int i,l;
	scanf("%s",s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(i%2==0)
		
			printf("%c",s[i]);
		
		
	}

	for(i=0;i<l;i++)
	{
		if(i%2!=0)
		
			printf("%c",s[i]);
		
		
	}
	
	return 0;
}
