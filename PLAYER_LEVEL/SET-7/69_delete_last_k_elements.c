#include <stdio.h>
int main()
{
    int n,a[10],i,j,k;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
    for(i=0;i<=(n-k-1);i++)
    {
       printf("%d ",a[i]);
    }
    return 0;
}
