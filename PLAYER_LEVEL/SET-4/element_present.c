#include <stdio.h>
#include<string.h>
int main()
{
   int a[100],i,n,k,flag=0;
   scanf("%d %d",&n,&k);
   for(i=0;i<n;i++)
   {
   scanf("%d",&a[i]);
   if(a[i]==k)
   flag=1;
   }
   if(flag==1)
   printf("yes");
   else
   printf("no");
    return 0;
}


