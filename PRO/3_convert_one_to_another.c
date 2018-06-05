#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10];
    int k=0,n,n1,i,j;
    scanf("%s %s",a,b);
    n=strlen(a);
    n1=strlen(b);
    if(n<=n1)
    {
    for(i=0,j=0;i<n,j<n1;i++,j++)
    {
       if(a[i]!=b[j])
       {
           k++;
       }
       else if(a[i]==b[j])
       {
           continue;
       }
    }
    printf("%d",k);
    }
    else
    {
        for(i=0,j=0;i<n1,j<n;i++,j++)
        {
            if(a[i]==b[j])
            {
                continue;
            }
            else if(a[i]!=b[j])
            {
                k++;
            }
        }
        printf("%d",k);
    }
	return 0;
}
