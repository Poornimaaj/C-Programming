#include<stdio.h>
#include<string.h>
int main()
{
char s[100],t; 
int len,i;

scanf("%s",s);
len=strlen(s);
if(len%2==0)
{
for(i=0;i<len;i+=2)
{
t=s[i];
s[i]=s[i+1];
s[i+1]=t;

}
printf("%s",s);
}
else
{
for(i=0;i<(len-1);i+=2)
{
t=s[i];
s[i]=s[i+1];
s[i+1]=t;

}
printf("%s",s);
}
return 0;
}
