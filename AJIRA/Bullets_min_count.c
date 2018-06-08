
#include<stdio.h>
int main()
{
   int n,i,j,a[10][10],b=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       for(j=0;j<2;j++)
       {
          scanf("%d",&a[i][j]); 
       }
       
   }
   for(i=0;i<n;i++)
   {
       if(a[i][0]!=0 && a[i][1]!=0)
       {
       for(j=i+1;j<n;j++)
       {
           if(a[j][0]!=0 && a[j][1]!=0)
           {
               if((a[i][0]<=a[j][0] && a[i][1]>=a[j][0])||(a[j][0]<=a[i][0] && a[j][1]>=a[i][0]))
               {
                   b=b+1;
                   a[i][1]=0;
                   a[i][0]=0;
                   a[j][1]=0;
                   a[j][0]=0;
               }
           }
       }
       }
   }
   for(i=0;i<n;i++)
   {
       if(a[i][0]!=0 && a[i][1]!=0)
       {
          b=b+1;  
       }
      
       
   }
   printf("%d",b);
    return 0;
    
}
