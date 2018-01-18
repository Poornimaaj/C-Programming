#include<stdio.h>


int main()
{
	int n,k,p=1,i;
	scanf("%d %d",&n,&k);
	for(i=0;i<k;i++)
	{
	    p=p*n;
	}
	printf("%d",p);
	return(0);	
}
