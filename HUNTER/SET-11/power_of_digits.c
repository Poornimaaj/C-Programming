
#include <stdio.h>
#include<string.h>
int main()
{
    int i,j,p=1,s=0,l,t;
    char a[10];
    scanf("%s",a);
    l=strlen(a);
    
    for(i=0;i<l;i++)
    {
        a[i+1]=t;
       for(j=0;j<t;j++)
       {
           p=1;
           p=p*a[i];
           
       }
       s=s+p;
    }
    printf("%d",s);
    return 0;
}
