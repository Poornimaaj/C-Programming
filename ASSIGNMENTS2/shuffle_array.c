#include<stdio.h>
int main()
{
    int n1,a[10],n2,i,t;
    scanf("%d %d",&n1,&n2);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=(n1-n2);i<n1;i++)
    printf("%d ",a[i]);
    for(i=0;i<=n2;i++)
    
      printf("%d ",a[i]); 
    
    return 0;
}
