/*
1. wild ptr
2. void ptr
3. null ptr
4. dangling ptr
5. far ptr
6. near ptr
    
1. wild ptr
ex:
int *ptr;

2. null ptr
ex:
int *ptr = NULL;

3 void ptr (generic ptr)
ex:

void *ptr;

int a=10;
double d=10.5;

ptr = &a;
ptr++;
printf("%d",*ptr);
ptr = &d;
printf("%ld",*ptr);

*/
#include <stdio.h>

int main()
{
    int a[10];
    int *ptr = a;

    int i;
    /*
    printf("\nEnter the values of array\n");
    for(i=0;i<10;i++)
        scanf("%d",(a+i));
    
    printf("\nList is \n");
    for(i=0;i<10;i++)
        printf(" %u ",*(a+i));
    */
    
    printf("\nEnter the values of array\n");
    for(i=0;i<10;i++,ptr++)
        scanf("%d",ptr);
    ptr = a; // rebasing to the base address
    printf("\nList is \n");
    for(i=0;i<10;i++,ptr++)
        printf(" %u ",*ptr);

    printf("\n\n");
    return 0;


    

}