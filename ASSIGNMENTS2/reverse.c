#include <stdio.h>
#include<string.h>

int main()
{
 char a[100],b[100],c[100];
 int i,l1,l2,l;
 scanf("%s",a);
 l=strlen(a);
 i=0;
 do while(a[i]!=' ' || a[i]='\0')
 {
     b[i]=a[i];
     i++;
 }
 
 i++;
 do while(a[i]!=' ' || a[i]='\0')
 {
     c[i]=a[i];
     i++;
 }
  
 i++;
 l1=strlen(b);
 l2=strlen(c);
 for(i=l1;i>=0;i--)
 {
 printf("%s",b[i]);
 }
 for(i=l2;i>=0;i--)
 {
 printf("%s",c[i]);
 }

    return 0;
}
