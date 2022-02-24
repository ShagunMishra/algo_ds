#include <stdio.h>
#include <stdlib.h>

// Find duplicate element in sorted array using hashing

struct Array
{
    int A[20];
    int size;
    int length;
};

struct Hash
{
    int H[20];
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

void Program7(struct Array arr)
{
    int max,min,i;
    min=arr.A[0];
    max=arr.A[0];
    for(i=1;i<arr.length;i++)
    {
        if(arr.A[i]<min)
            min=arr.A[i];
        else if(arr.A[i]>max)
            max=arr.A[i];
    }

    struct Hash ar={{0},20,max};
    for(i=0;i<arr.length-1;i++)
    {
        ar.H[arr.A[i]]++;
    }
    for(i=0;i<=max;i++)
    {
        if(ar.H[i]>1)
            printf("\n%d is appearing %d times",i,ar.H[i]);
    }
}

int main()
{
    struct Array arr1={{3,6,8,8,10,12,15,15,15,11},20,10};
    Display(arr1);
    Program7(arr1);
    return 0;
}
