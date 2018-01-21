#include<stdio.h>
#include<string.h>
int main()
{
 int l,i;
 char a[20];


 

 gets(a);
 
 l=strlen(a);
 
 for(i=l-1;i>=0;i--)
 {
 	printf("%c",a[i]);
	 }	

 return 0;
}
