#include <stdio.h>
#include<string.h> 
int main(void) 
{
	char s[50],c;
	int i,j,count=1,max=1,l;
    gets(s);
    l=strlen(s);
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		if(s[i]==s[j])
		{
			count++;
			if(count>max)
			{
				max=count;
				c=s[i];
			}
		}
 
	}
	printf("\n%c",c);
	return 0;
}
 
