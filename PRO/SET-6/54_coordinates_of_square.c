
#include<stdio.h>
int main()
{
		int a[10],count=0,i,j,t;
		  for(i=0;i<8;i++)
		   {
		       scanf("%d",&a[i]);
		   }
		  for(i=0;i<8;i++)
		  {
		      for(j=i+1;j<8;j++)
		      {
		          if(a[i]>a[j])
		          {
		              t=a[i];
		              a[i]=a[j];
		              a[j]=t;
		          }
		      }
		  }
		   for(i=0;i<4;i++)
		   {
		       if((2*a[i])==(a[i+4]))
		       {
		         count++;
		       }
		   }
		   printf(count==4?"yes":"no");
	
}
