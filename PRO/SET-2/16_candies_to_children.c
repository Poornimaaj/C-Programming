#include <stdio.h>
int main() {
	int n,a[100],i,j,c[100],ca=0;
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	c[i]=1;
	}
	for(i=1;i<n;i++)
	{
	    if(a[i]>a[i-1])
	    c[i]=c[i-1]+1;
	}
	for(i=0;i<n;i++)
	ca=ca+c[i];
	printf("%d",ca);
	return 0;
}
