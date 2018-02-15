  #include<stdio.h>    
   
    int main()
    {  
    int a[10],n,sum=0,i,j,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
     for(j=0;j<n;j++)
    {
    scanf("%d",&a[j]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>=0;j--)
        {
        if(a[i]==a[j])
       count++;
        
    }
    }
    if(count==n)
    printf("yes");
    else
    printf("no");
    return 0;  
    }  


