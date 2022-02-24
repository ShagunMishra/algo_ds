#include <stdio.h>
#include <stdlib.h>

// Find duplicate in sorted array

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

void Program5(struct Array arr)
{
    int i,lD=0;
    for(i=0;i<arr.length;i++)
    {
        if(arr.A[i]==arr.A[i+1] && arr.A[i]!=lD)
        {
            printf("\nDuplicate number is: %d",arr.A[i]);
            lD=arr.A[i];
        }
    }

}
int main()
{
    struct Array arr1={{3,6,8,8,10,12,15,15,15,20},20,10};
    Display(arr1);
    Program5(arr1);
    return 0;
}
