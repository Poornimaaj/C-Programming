#include <stdio.h>
#include<string.h>
int main() 
{
	int a,b,diff;
	scanf("%d %d",&a,&b);
	diff=a-b;
	if(diff%2==0)
	printf("even");
	else
	printf("odd");
	return 0;
}
