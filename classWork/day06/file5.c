/*
2D array
sy:
dt arrName[CAP_R][CAP_C];
*/

#include <stdio.h>

#define CAP_R 3
#define CAP_C 3

int main()
{
    int itr,itc;
    int START = 0;
    int arr[CAP_R][CAP_C] = {{1,2,3},{4,5,6},{7,8,9}};

    printf("\nList of array elements are\n");
    for(itr=START;itr<CAP_R;itr++)
    {
        for(itc=START;itc<CAP_C;itc++)
        {
            printf("%d\t",arr[itr][itc]);
        }
        printf("\n");
    } 

    printf("\n\n");
    return 0;
}
