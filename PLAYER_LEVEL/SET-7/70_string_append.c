#include<stdio.h>
#include<string.h>
int main() 
{
    char a[10],b[10];
    int i,n,j;
	scanf("%s %s",a,b);
	n=strlen(a);
    for(i=0;i<n;i++)
    {
        
    }
    for(j=0;a[j]!='\0';j++)
    {
        a[i]=b[j];
        i++;
    }
    a[i]='\0';
    printf("%s",a);
	return 0;
}
