#include <stdio.h>
#include <stdlib.h>

// Find the paired element in unsorted array with sum k using hashing

struct Array
{
    int A[20];
    int size;
    int length;
};

struct Hash
{
    int size;
    int H[20];
};

void Display(struct Array arr)
{
    int i;
    printf("\nElements are: \n");
    for(i=0;i<arr.length;i++)
        printf(" %d",arr.A[i]);
}

void Program11(struct Array arr,int k)
{
    int max,i;
    max=arr.A[0];
    for(i=1;i<arr.length;i++)
    {
        if(arr.A[i]>max)
            max=arr.A[i];
    }
    struct Hash ar={max,{0}};
    for(i=0;i<arr.length-1;i++)
    {
        if(ar.H[k-arr.A[i]]!=0)
            printf("\n%d + %d = %d",arr.A[i],k-arr.A[i],k);
        ar.H[arr.A[i]]++;
    }
}

int main()
{
    struct Array arr1={{6,3,8,10,1,7,5,2,9,14},20,10};
    Display(arr1);
    Program11(arr1,10);
    return 0;
}
