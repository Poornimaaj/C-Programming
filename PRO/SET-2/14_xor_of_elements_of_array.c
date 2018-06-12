#include <stdio.h>
int main()
{
	int n,q,u[10],v[10],a[10],i,j,k;
	scanf("%d %d",&n,&q);
	for(i=1;i<=n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(k=1;k<=q;k++)
	{
	    scanf("%d %d",&u[k],&v[k]);
	}
		for(k=1;k<=q;k++)
	{
	     int x=0;
	    for(i=u[k];i<=v[k];i++)
	    {
	      x=x^a[i];
	      
	    }
	   printf("%d\n",x);
	}

	    return 0;
}
