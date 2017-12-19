#include<stdio.h>
int main()
{
int a,b,c;
printf("\n enter the 3 numbers");
scanf("%d%d%d",&a,&b,&c);
if((a>b) && (a>c))
{
printf("\n %d is the largest",a);
}else if(b>c)
{printf("\n %d  is the largest",b);
}else
{printf("\n %d is the largest",c);
}return 0;
}
