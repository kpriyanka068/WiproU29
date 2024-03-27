#include <stdio.h>
#include <emp.h>

int main()
{
    EMP e;
    printf("\nAddress of e in main: %u",&e);
    getDetails(&e); //pass by address/reference
    printDetails(e); //pass by value

    printf("\n\n");
    return 0;
}

