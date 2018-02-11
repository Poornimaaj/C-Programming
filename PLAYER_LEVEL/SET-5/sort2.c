#include <stdio.h>
int main() 
{
	int n,a[10],i,count=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            count=0;
            break;
        }
        else
        {
            count=1;
        }
    }
    }
    if(count==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
	return 0;
}
