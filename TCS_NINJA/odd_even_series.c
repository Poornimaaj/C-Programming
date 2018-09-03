#include<stdio.h>
void main()
{
    int i,a[2000],n;
		for(i=1;i<=2000;i++)
		{
		    if(i%2!=0)
		        a[i]=i-1;
		        else
		        a[i]=a[i-1]/2;
		}
		for(i=1;i<=2000;i++)
		{
		    printf("%d",a[i]);
		    printf(" ");
		}
		scanf("%d",&n);
		for(i=1;i<=2000;i++)
		{
		    if(i==n)
		    printf("%d",a[i]);
		}
	}

