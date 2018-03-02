#include <stdio.h>

int main()
{
    
    int a,b,c,s=0,x,y,z;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b)
    {
        s=a;
        a=b;
        b=s;
    }
    if(a<c)
    {
       s=a;
        a=c;
        c=s;  
    }
   
    x=a*a;
    y=b*b;
    z=c*c;
    
    if(x==y+z)
    printf("yes");
    else
    printf("no");
    return 0;
}


