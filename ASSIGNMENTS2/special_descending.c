#include<stdio.h>
void main()
{
    int n,a[10],i,j,r,s,t;
    int ar(int);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            s=ar(a[i]);
            t=ar(a[j]);
            printf("%d,%d",s,t);
            if(s<t)
            {
                r=a[i];
                a[i]=a[j];
                a[j]=r;
            }
            if(s==t)
            {
                if(a[i]<a[j])
                {
                    r=a[i];
                    a[i]=a[j];
                    a[j]=r;
                }
            }
                
            
        }
    }
 for(i=0;i<n;i++)
 {
     printf("%d",a[i]);
 }
}
int ar(int x)
{
    int y;
    y=x/10;
    if(y>9)
     y=x/100;
        else
        return(y);
        if(y>9)
         y=x/1000;
         else
         return(y);
          if(y>9)
          y=x/10000;
           return(y);
}      
    
    
