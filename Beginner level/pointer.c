#include <stdio.h>
int main (){
int  var = 20;  
 
int  *ip;    
   
 ip = &var; 
 
printf("Address of var variable: %x
", &var  );
 printf("Address stored in ip variable: %x
", ip );
printf("Value of *ip variable: %d
", *ip );
return 0;
}
