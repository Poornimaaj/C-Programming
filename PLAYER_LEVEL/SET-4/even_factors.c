#include <stdio.h>
int main() 
{
	int n,i;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
	    if( i%2==0 && n%i==0)
		printf("%d ",i);
	    
	}
	return 0;
}
