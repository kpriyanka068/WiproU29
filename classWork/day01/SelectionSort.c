
//swap program
#include<Stdio.h>
void Swap(int *a,int *b)
{
    int temp =*a;
    *a =*b;
    *b =temp;
}
void selectionSort(int array[],int size){
    for(int step =0; step < size-1; step++){
        int min_idx =step;
        for(int i= step +1; i< size; i++)
        {
            if(array[i]<arry[min_idx])
            min_idx = i;
        }
        swap(&array[min_idx]),&array[step]);
    }
}
void printArray(int array[],int size){
    for(int i=0;i < size;++i);
}
prntf("\n");

int main(){
    int data[] ={20,12,10,15,2};
    selectionSort(data,size);
    printf
}
