#include <stdio.h>

int main() 
{
	int n,k,count=0,p=1,i,t;
	scanf("%d %d",&n,&k);
	t=n;
	while(n>=k)
	{
	n=n/k;
	count++;
	}
	
	for(i=0;i<count;i++)
	{
	    p=p*k;
	}
	
	if(p==t)
	{
	printf("yes");
	}
	else
	{
	printf("no");
	}
	return 0;
}
