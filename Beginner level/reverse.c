#include <stdio.h>
    #include<string.h>
    void main()
    {
    	char *s;
    	int length,i;
    	
    	printf("\nENTER A STRING: ");
    	scanf("%s",s);
    	length=strlen(s);
    	printf("\nTHE REVERSE OF THE STRING IS:");
    	for(i=length;i>=0;i--)
    		printf("%c",*(s+i));
    	
    }
