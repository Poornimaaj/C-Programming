#include<stdio.h>
int main()
{
int a,i,sum=0,d,e;
printf("enter the number");
scanf("%d",&a);

d=((a*10)+a);
e=((a*100)+d);
sum=a+d+e+((a*1000)+e);
printf("%d",sum);
}
