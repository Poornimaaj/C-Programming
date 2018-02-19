#include <stdio.h>
int main()
{
	int a[10],ch,n,i,j,max=0,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                
            }
        }
        if(count<max)
        {
            max=count;
            ch=a[i];
        }
    }
    printf("%d",ch);
	return 0;
}
