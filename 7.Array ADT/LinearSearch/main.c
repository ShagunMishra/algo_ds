#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("\nElements are: \n");
    for(i=0;i<arr.length;i++)
        printf(" %d",arr.A[i]);
}

void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int LinearSearch(struct Array arr, int key)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        if(key==arr.A[i])
            return i;
    }
    return -1;
}

int TranspositionLinearSearch(struct Array *arr, int key)
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(key==arr->A[i])
        {
            swap(&arr->A[i],&arr->A[i-1]);
            return i;
        }
    }
    return -1;
}

int FrontHeadLinearSearch(struct Array *arr, int key)
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(key==arr->A[i])
        {
            swap(&arr->A[i],&arr->A[0]);
            return i;
        }
    }
    return -1;
}

int main()
{

    struct Array arr={{2,23,14,5,6,9,8,12},20,8};

    printf("%d\n",LinearSearch(arr,14));
    printf("%d\n",TranspositionLinearSearch(&arr,6));
    printf("%d\n",FrontHeadLinearSearch(&arr,12));
    Display(arr);

    return 0;
}
