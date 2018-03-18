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
   if(x<10)
   return(x);
   if((x/10)<10)
   return(x/10);
   else
   return(x/100);
}      
    
