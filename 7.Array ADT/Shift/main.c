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

void LeftShift(struct Array *arr)
{
    int i;
    for(i=-1;i<arr->length;i++)
        arr->A[i]=arr->A[i+1];
}


void LeftShiftRotate(struct Array *arr,int d)
{
    int *b;
    int i,j,n=0,temp;
    temp=arr->A[n];
    b=(int*)malloc(arr->length*sizeof(int));
    for(i=0,j=0;i<arr->length;i++,j++)
        b[j]=arr->A[i];
    for(j=d;j>0;j--){
    for(i=-1;i<arr->length;i++)
        arr->A[i]=arr->A[i+1];
    arr->A[arr->length-1]=temp;
    n++;
    temp=b[n];
    }
}


void RightShift(struct Array *arr)
{
    int i, temp=0;
    for(i=arr->length-1;i>=0;i--)
        arr->A[i]=arr->A[i-1];
    arr->A[0]=temp;
}


void RightShiftRotate(struct Array *arr)
{
    int i, temp=arr->A[arr->length-1];
    for(i=arr->length-1;i>=0;i--)
        arr->A[i]=arr->A[i-1];
    arr->A[0]=temp;
}

int main()
{

    struct Array arr={{2,3,9,16,18,21,28,32,35},10,9};

    Display(arr);

   // LeftShift(&arr);
   // Display(arr);

    LeftShiftRotate(&arr,4);
    Display(arr);


    //RightShift(&arr);
    //Display(arr);

    //RightShiftRotate(&arr);
    //Display(arr);
    return 0;
}
