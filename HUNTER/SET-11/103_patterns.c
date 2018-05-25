#include<stdio.h>
int main()
{
int n, c, k;
scanf("%d",&n);
 
    for ( c = 1 ; c <= n ; c++ )
    {
        for( k = 1 ; k <((n*2)-1) ; k+2 )
            printf("1 ");
 
        printf("\n");
    }
 
    return 0;
}
