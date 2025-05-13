#include <stdio.h>
#include <string.h>

int main()
    {
        char string[] ="lucianoEudes";// declarei a string
        
        strrev(string); // usei a função strrev para inverter a string ao contrario

        printf("String modificada %s",string);// printei a dstring invertida
    }