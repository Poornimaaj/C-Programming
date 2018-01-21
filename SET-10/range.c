#include <stdio.h>

int main() 
{
	int n,k,i,a[10],count;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    if(a[i]==k)
	    {
	        printf("yes");
	        count=1;
	    }
	}
	if(count!=1)
	{
	    printf("no");
	}
	return 0;
}
