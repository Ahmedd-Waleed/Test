#include <stdio.h>
#include <stdlib.h>

#define size 5

void selectionSort(int *);
void bubbleSort(int*);

int main()
{
    int arr[size] = {7,9,3,4,5};
    //selectionSort(arr);
    bubbleSort(arr);
    int i;
    for(i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;
}

void selectionSort(int *arr)
{
    int i,j,temp;
    for(i = 0; i < size - 1; i++)
        for(j = i+1; j < size; j++)
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}
void bubbleSort(int* arr)
{
    int i,j,temp;
    for(i = 0; i < size - 1; i++)
        for(j = 0; j < size-1-i; j++)
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
}
