
#include <stdio.h>

int main()
{
    int n,i,j,a[10],t,ele,ind;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    ind=-1;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
            ele=a[j];
			ind=j;	
            break;
            }
            
        }
        
    }
    if(ind!=-1)
		printf("%d",ele);
	else
		printf("Unique");


    return 0;
}
