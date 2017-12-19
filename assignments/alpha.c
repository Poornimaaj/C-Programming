#include<stdio.h>
int main()
{
char s;
printf("\n enter the character");
scanf("%c",s);
if((s>='A'&&s<='Z')||(s>='a'&&s<='z'))
printf("\n alphabet");
else
printf("\n not an alphabet");
return 0;
}
