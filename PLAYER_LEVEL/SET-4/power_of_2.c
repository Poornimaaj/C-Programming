#include <stdio.h>

int main() 
{
	int n,i,j,p=1,flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=i;j>0;j--)
		{
			p=p*2;
			if(p==n)
			{
				flag=1;
				break;
			}
			
		}
	}
	if(flag==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
