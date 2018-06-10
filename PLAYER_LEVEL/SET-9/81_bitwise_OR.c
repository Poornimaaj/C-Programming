#include <stdio.h>

int main() 
{
    int a[10],i,res=0,j,n;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
     {
    for(j=i+1;j<n;j++)
    {
    res=res+(a[i] | a[j]);
    }
    }
	printf("%d",res);
	return 0;
}
