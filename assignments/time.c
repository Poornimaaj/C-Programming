#include <stdio.h>

int main()
{
   int h1,h2,m1,m2,s1,s2,hr,min,sec;
   printf("\n enter the starting hours,minutes,seconds");
   scanf("%d,%d,%d",&h1,&m1,&s1);
   printf("\n enter the ending hours,minutes,seconds");
   scanf("%d,%d,%d",&h2,&m2,&s2);
    if(s2>s1)
    {
        m1--;
        s1=s1+60;
    }
    sec=s1-s2;
    if(m2>m1)
    {
        h1--;
        m1=m1+60;
    }
    min=m1-m2;
    hr=h1-h2;
    printf("%d:%d:%d",hr,min,sec);
    return 0;
}
