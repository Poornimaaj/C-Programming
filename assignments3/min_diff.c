#include <stdio.h>

int main()
{
    int n,i,a[10],diff=0,j;
    diff=a[1]-a[0];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i=0; i<n-1; i++){
      for ( j=i+1; j<n; j++){
          if ((a[j] - a[i]) < diff)
                diff = (a[j] - a[i]);
}
}
                printf("%d",diff);
                
 
    
    return 0;
}


