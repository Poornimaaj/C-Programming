#include<stdio.h>
void main()
{
       int n,i,count=0,count1=0,sum=0,a[10];
       
       scanf("%d",&n);
       for(i=0;i<n;i++)
       {
           scanf("%d",&a[i]);
       }
      int k=n/2;
      for(int i=0;i<k;i++){
          sum=sum+a[i];
          count++;
      }
      int d=sum;
      sum=0;
      for(int i=k;i<n;i++){
          sum=sum+a[i];
          count1++;
      }
      int u=sum;
      int l=d/count;
      int p=u/count1;
      if(l==p){
         printf("Yes");
      }
 else{
          printf("No");
 }


      
}
