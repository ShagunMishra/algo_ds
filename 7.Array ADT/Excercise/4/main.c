#include <stdio.h>
#include <stdlib.h>

// Find missing element in unsorted array
// Find MAX and MIN in single scan

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

void Program4(struct Array arr)
{
    //to find min and max
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
    //to find missing element
    struct Hash ar={{0},20,max};
    for(i=0;i<arr.length;i++)
    {
        ar.H[arr.A[i]]++;
    }
    for(i=min;i<=ar.length;i++)
    {
        if(ar.H[i]==0)
            printf("\nMissing number is: %d",i);
    }
}

int main()
{
    struct Array arr1={{3,7,4,9,12,6,1,11,2,10},20,10};
    Display(arr1);
    Program4(arr1);
    return 0;
}
