#include <stdio.h>
#include <stdlib.h>

// Find single missing element in sorted array

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

void Program2(struct Array arr)
{
    int i,diff;
    diff=arr.A[0]-0;
    for(i=0;i<arr.length;i++)
    {
        if(arr.A[i]-i!=diff)
        {
            printf("\nMissing number is: %d",i+diff);
            break;
        }
    }

}
int main()
{
    struct Array arr1={{6,7,8,9,10,11,13,14,15,16,17},20,11};
    Display(arr1);
    Program2(arr1);
    return 0;
}
