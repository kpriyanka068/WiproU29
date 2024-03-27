/*
demo on static variables
*/
#include <stdio.h>

int func1(int);


int main()
{
    printf("\nret=%d\n",func1(1));
    printf("\nret=%d\n",func1(1));
    
    printf("\n\n");
    return 0;
}

int func1(int n)
{
    static int val;
    val+=1;
    n = val+n;
    return n;
}