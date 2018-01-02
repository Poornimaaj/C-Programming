#include <stdio.h>

int main()
{
    char s[20];
    int n,i;
    scanf("%s",s);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%c",s[i]);
    }
    return 0;
}
