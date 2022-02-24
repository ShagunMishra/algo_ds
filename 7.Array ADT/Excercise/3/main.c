#include <stdio.h>
#include <stdlib.h>

// Find multiple missing element in sorted array

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

void Program3(struct Array arr)
{
    int i,diff;
    diff=arr.A[0]-0;
    for(i=0;i<arr.length;i++)
    {
        while(diff<arr.A[i]-i)
        {
            printf("\nMissing number is: %d",i+diff);
            diff++;
        }
    }
}

int main()
{
    struct Array arr1={{6,7,8,9,11,12,15,16,17,18,19},20,11};
    Display(arr1);
    Program3(arr1);
    return 0;
}
