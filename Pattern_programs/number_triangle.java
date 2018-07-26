#include<stdio.h>    
#include<stdlib.h>  
int main(){  
  int ch=1;    
    int i,j,k,m,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)    
    {    
        for(j=n;j>=i;j--)    
            printf(" ");    
        for(k=1;k<=i;k++)    
            printf("%d",ch++);    
            ch--;    
        for(m=1;m<i;m++)    
            printf("%d",--ch);    
        printf("\n");    
          
    }    
return 0;  
}  
