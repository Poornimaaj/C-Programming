
#include <stdio.h>

int main()
{
    int n,a[10],i,j,k=0,p=1,sum=0,t=0,r=0;
    scanf("%d",&n);
	while(n!=0)
	{
	    r=n%10;
	    a[k]=r;
	    k++;
	    n=n/10;
	}
	for(i=k-1;i>0;i--)
	{
	    p=1;
	    for(j=0;j<a[i-1];j++)
	    {
	       
	        p=p*a[i];
	    }
	    sum=sum+p;
	}
	p=1;
	for(j=0;j<a[k-1];j++)
	{
	    p=p*a[0];
	}
	sum=sum+p;
	printf("%d",sum);
    return 0;
}
