#include <stdio.h>
#include <stdlib.h>

// Count duplicate in sorted array

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
    int i,j;
    for(i=0;i<arr.length-1;i++)
    {
        if(arr.A[i]==arr.A[i+1])
        {
            j=i+1;
            while(arr.A[j]==arr.A[i])
                j++;
            printf("\n %d is appearing %d times ",arr.A[i],j-i);
            i=j-1;
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
