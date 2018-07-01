#include <stdio.h>
void main()
{
int n,count=0,c;
scanf("%d",&n);
if(n>=1000)
{
    c=n/1000;
    n=n%1000;
    
    count=count+c;
    printf("1000 - %d",c);
    
}
if(n>=500 && n<1000)
{
     
    c=n/500;
    n=n%500;
    count=count+c;
     printf("\n500 - %d",c);
}
if(n>=100 && n<500)
{
   
    c=n/100;
     n=n%100;
    count=count+c;
     printf("\n100 - %d",c);
    
}
if(n>=50 && n<100)
{
   
    c=n/50;
     n=n%50;
    count=count+c;
     printf("\n50 - %d",c);
    
}
if(n>=10 && n<50)
{
    
    c=n/10;
     n=n%10;
    count=count+c;
     printf("\n10 - %d",c);
}
if(n<10)
{
count=count+n;
 printf("\n1 - %d",n);
}

printf("\n%d",count);
}
