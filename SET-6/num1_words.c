#include <stdio.h>
#include<string.h>
int main() 
{
	char a[100];
	int n,i,count=0;
	gets(s);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
	    if(a[i]==' ')
	    {   
	        count++;
	    }
	    else
	    {
	        continue;
	    }
	}
    printf("%d",count+1);
	return 0;
}
