/*  Reverse the array of elements */

#include <stdio.h>

int reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)

    // swap elements at start and end indices
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    printf("Reverse array:");
        for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");

   // return arr;
}

int main()
{
    int arr[] = {1, 22, 3, 4, 5};
    printf("\nThe size of array %ld and the element size %ld\n",sizeof(arr),sizeof(arr[0]));
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Original array:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverseArray(arr, size);
    return 0;
}