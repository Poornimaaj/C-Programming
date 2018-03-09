#include<stdio.h>
void main()
{
    int l,h,count=0,i,j;
    scanf("%d %d",&l,&h);
    for(i=0,j=l;i<h,j<h;i++,j++)
    {
        if(i*i==j)
        count++;
    }
    printf("%d",count);
   
}
