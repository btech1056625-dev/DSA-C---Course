#include<stdio.h>  // pre processor directive to include standard input output header file
#define PI 3.14  // macro definition
#define water(x) x bottles of water   // function-like macro

// GNU: GNU's Not Unix----> Linux OS
// RECURSIVE ACRYNOM

int main(){
    printf("Hello, World!");

    float radius = 5.0;
    float area = PI * radius * radius;
    printf("Area of the circle is: %f", area);


    

    // source code(.c)---> pre processor(.i)---> compiling(.s)---> assembling(.o)--->
    // linking(.out)---> loading---> execution
    // cpp: C Pre Processor


    #define PPS    // defining PPS macro for demonstration

    #ifdef PPS
        printf("\nWelcome! to Pre Processor Services.");


    #else
        printf("\nPPS is not defined.");

    #endif
    
    #ifndef PPS2
        printf("\nPPS2 is not defined.");
    
    #else
        printf("\nWelcome! to Pre Processor Services 2.");
    #endif

    #define DEBUG 

    #ifdef DEBUG
        printf("\nDebugging is enabled.");
        #els
        printf("\nDebugging is disabled.");
    #endif




    return 0;
}