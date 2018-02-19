#include <stdio.h>

int main()
{
   char c,r;
   scanf("%c %c",&c,&r);
   if((c=='S')&&(r=='R')||(c=='R')&&(c=='S'))
   printf("R");
    else if((c=='P')&&(r=='R')||(c=='R')&&(c=='P'))
   printf("P");
   else
   printf("S");
   

    return 0;
}


