#include <stdio.h>
#include <stdlib.h>

// Find the paired element in sorted array with sum k

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

void Program12(struct Array arr,int k)
{
    int i=0,j=arr.length-1;

    while(i<j)
    {
        if(arr.A[i]+arr.A[j]==k)
        {
           printf("\n%d + %d = %d",arr.A[i],arr.A[j],k);
           i++;
           j--;
        }
        else if(arr.A[i]+arr.A[j]<k)
            i++;
        else
            j--;
    }
}

void forProgram12(struct Array arr,int k)
{
    int i,j;

    for(i=0,j=arr.length-1;i<j;)
    {
        if(arr.A[i]+arr.A[j]==k)
        {
           printf("\nfor %d + %d = %d",arr.A[i],arr.A[j],k);
           i++;
           j--;
        }
        else if(arr.A[i]+arr.A[j]<k)
            i++;
        else
            j--;
    }
}

int main()
{
    struct Array arr1={{1,3,4,5,6,8,9,10,12,14},20,10};
    Display(arr1);
    Program12(arr1,10);
    forProgram12(arr1,10);
    return 0;
}
