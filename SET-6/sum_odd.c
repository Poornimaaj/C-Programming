#include <stdio.h>
#include<string.h>
int main() 
{
	int a,b,sum;
	scanf("%d %d",&a,&b);
	sum=a+b;
	if(sum%2==0)
	printf("even");
	else
	printf("odd");
	return 0;
}
