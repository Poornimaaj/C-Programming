#include<stdio.h>
#include<string.h>
int main()
{
   char s[100],a[100],b[100];
 int i,l,j;
 scanf("%s",s);
 l=strlen(a);
 for(i=l-1;i>=0;i--)
 {
a[i]=s[j];
j++;


 }
 printf("%s",a);
 j=0;
 
 for(i=0;i<l;i++)
 {
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
  a[i]=a[i];
  else
  {
  b[j]=a[i];
  j++;
 }    
 }
 printf("\n%s",b);


    return 0;
}
