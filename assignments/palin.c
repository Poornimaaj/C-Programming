

#include <stdio.h>
 
int main()
{
   int n, rev = 0, integer;
 
   printf("Enter a number to check if it is a palindrome or not\n");
   scanf("%d",&n);
 
   integer = n;
 
   while(integer>0)
   {
      rev = rev*10;
      rev = rev + integer%10;
      integer = integer/10;
   }
 
   if ( n == rev )
      printf("%d is a palindrome number, n);
   else
      printf("%d is not a palindrome number, n);
 
   return 0;
}
