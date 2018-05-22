
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[100][100],k,l,i,j,n,m;
   scanf("%d %d",&n,&m);
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
  for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
	{
		
		for(k=i+1;k<n;k++)
		{
			for(l=0;l<m;l++)
			{
				if(a[k][l]==a[i][j])
					printf("%d",a[i][j]);
			}
			
		}
		
	}
}
 return 0;  

}
