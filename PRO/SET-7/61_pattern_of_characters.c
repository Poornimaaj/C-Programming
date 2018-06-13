#include <stdio.h>
#include<string.h>
int main() 
{
 char s1[10],s2[10];
 int n,m,i,e;
scanf("%s",s1);
scanf("%s",s2);
n=strlen(s1);
m=strlen(s2);
if(n==m)
{
for(i=0;i<n;i++)
{
e=s1[i]+s2[i];
e=e-96;
if(e<123)
{
char s=e;
printf("%c",s);
}
else
{
char s=e-26;
printf("%c",s);
}
}
}
else
{
printf("not equal");
}
return 0;
}
