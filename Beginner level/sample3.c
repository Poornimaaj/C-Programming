#include <stdio.h>

int main( int argc, char *argv[] ) {

 printf("Program name %s", argv[0]);

if( argc == 2 ) {

 printf("The argument supplied is %s", argv[1]);

 }

 else if( argc > 2 ) {

 printf("Too many arguments supplied.");

 }

 else {

 printf("One argument expected.");

 }

}
