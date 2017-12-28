#include <stdio.h>
 
int main()
{
   int n;
 
   printf("Enter an integer\n");
   scanf("%d", &n);
    if(n%2!=0)
    n=n-1;
    else
    n=n-2;
    printf("%d",n);
    return 0;
}
