#include <stdio.h>
#include <stdlib.h>

// Find the paired element in unsorted array with sum k

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

void Program10(struct Array arr, int k)
{
    int i,j;
    for(i=0;i<arr.length-1;i++)
    {
        for(j=i+1;j<arr.length-1;j++)
        {
            if(arr.A[i]+arr.A[j]==k)
                printf("\n%d + %d = %d",arr.A[i],arr.A[j],k);
        }
    }
}

int main()
{
    struct Array arr1={{6,3,8,10,16,7,5,2,9,14},20,10};
    Display(arr1);
    Program10(arr1,10);
    return 0;
}
