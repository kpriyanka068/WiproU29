#include <stdio.h>

void swapValues(int*, int*);

int main()
{
   int a=10, b=20;

   printf("\nBefore Swapping values are\n");
   printf("\na=%d\tb=%d\n",a,b);
   swapValues(&a,&b);
   printf("\nAfter Swapping values are\n");
   printf("\na=%d\tb=%d\n",a,b);
   
   printf("\n\n");

   return 0;
}


void swapValues(int *x, int *y)
{
   int t;
   t = *x;
   *x=*y;
   *y=t;
   
   printf("\n(In the Function)\ta=%d\tb=%d\n",*x,*y);
}

