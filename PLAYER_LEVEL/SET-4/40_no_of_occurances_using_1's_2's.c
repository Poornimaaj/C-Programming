#include<stdio.h>
int main()
{
int k,i,c=0,j;
scanf("%d",&k);
for(i=0;i<=k;i++)
{
for(j=k;j>=0;j--)
{
if((i*1)+(j*2)==k)

c=c+1;

}
}
printf("%d",c);
return 0;
}
