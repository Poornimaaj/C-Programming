#include<stdio.h>
#include<string.h>
int main()
{
char v[100];
int i,l,count=0,k,count1=0;
scanf("%s",v);
l=strlen(v);
for(i=0;i<l;i++)
{
if((v[i]=='a')||(v[i]=='e')||(v[i]=='i')||(v[i]=='o')||(v[i]=='u')||(v[i]=='A')||(v[i]=='E')||(v[i]=='I')||(v[i]=='O')||(v[i]=='U'))
count++;
for(k=0;k<count;k++)
{
    v[k]=v[i];
    printf("%c",v[k]);
}
else
count1++;
for(j=0;j<r;j++)
{
    v[j]=v[i];
    printf("%c",v[j]);
}
printf("%c")
}
return 0;
}

