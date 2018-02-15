#include<stdio.h>    
    #include<string.h>
    int main()
    {  
    char a[100];
    int l,count=0,i;
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if((a[i]>='0' && a[i]<='9')||(a[i]>='A' && a[i]<='F'))
        count++;
    }
    if(count==l)
        printf("yes");
        else
        printf("no");
    return 0;  
    }  


