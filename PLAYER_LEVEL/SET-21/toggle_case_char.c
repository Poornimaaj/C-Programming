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
        if(a[i]>='A' && a[i]<='Z')
        a[i]=a[i]+32;
        else if(a[i]>='a' && a[i]<='z')
        a[i]=a[i]-32;
        printf("%c",a[i]);
    }
    return 0;  
    }  
