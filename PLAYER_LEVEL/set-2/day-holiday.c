#include <stdio.h>

enum week { sunday, monday, tuesday, wednesday, thursday, friday, saturday };

int main()
{
    enum week i;
    scanf("%d",&i);
    if(i==0||i==6)
    printf("holiday");
   
    return 0;
}
