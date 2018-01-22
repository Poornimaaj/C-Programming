#include<stdio.h>
#include<string.h>
int main()
{
   char a[100],b[100];
 int i,l1,j,l;
 gets(a);
 l=strlen(a);
 for(i=0;i<l;i++)
 {
 b[i]=a[i];

 }
 
 for(i=0;i<l;i++)
 {
    if(a[i]==' ')
    {
    l1=i;
     
 

 for(j=l1-1;j>=0;j--)
 {
 printf("%c",b[j]);
 }
printf(" ");
 for(j=l-1;j>=l1;j--)
 {
     printf("%c",b[j]);
    }
 }
 }
    return 0;
}
