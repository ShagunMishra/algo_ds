#include <stdio.h>
#include <stdlib.h>

// Find single missing element in sorted array (for 1st n natural number)

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

void Program1(struct Array arr)
{
    int sum=0,i,s;
    for(i=0;i<arr.length;i++)
        sum=sum+arr.A[i];
    s=arr.A[arr.length-1]*(arr.A[arr.length-1]+1)/2;
    printf("\nMissing number is: %d",s-sum);
}
int main()
{
    struct Array arr1={{1,2,3,4,5,6,8,9,10,11,12},20,11};
    Display(arr1);
    Program1(arr1);
    return 0;
}
