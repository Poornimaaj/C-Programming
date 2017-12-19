#include<stdio.h>
int main()
{
int n,n1;
scanf("%d",&n);
while(n)
{
n=n%10;
printf("%d",n);
}
if(n==n)
printf("palindrome");
else
printf("not a palindrome");
return 0;
}
