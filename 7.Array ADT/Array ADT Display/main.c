#include <stdio.h>
#include <stdlib.h>

struct Array
{
    //int *A; OR
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr) //to display elements of array
{
    int i;
    printf("\nElements are: \n");
    for(i=0;i<arr.length;i++)
        printf(" %d",arr.A[i]);
}
int main()
{
    /* struct Array arr;
    int n,i;
    printf("Enter size of an array: ");
    scanf("%d",&arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(int));
    arr.length=0;

    printf("Enter number of numbers: ");
    scanf("%d",&n);

    printf("Enter all Elements: \n");
    for(i=0;i<n;i++)
        scanf("%d",&arr.A[i]);
    arr.length=n;*/

    //In above code size of array can be decided by the user as dynamic memory allocation

    struct Array arr={{2,3,4,5,6},20,5};
    Display(arr);

    return 0;
}
