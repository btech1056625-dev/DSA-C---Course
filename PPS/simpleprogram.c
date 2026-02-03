#include<stdio.h>

int main(){
    printf("This is a simple C program.");
    // stdio.h: standard input output header file
    // stdin: standard input(keyboard)
    //stdout: standard output(screen/terminal)
    // stderr: standard error(screen/terminal)

    // Pre processor: gcc -E simpleprogram.c -o simpleprogram.i
    // Compiling: gcc -S simpleprogram.i -o simpleprogram.s 
    // Assembling: gcc -c simpleprogram.s -o simpleprogram.o
    // Linking: gcc simpleprogram.o -o simpleprogram.out
    // gcc -save-temps simpleprogram.c -o simpleprogram  (all in one step)



    return 0;
}