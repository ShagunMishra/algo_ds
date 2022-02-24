#include <stdio.h>
#include <stdlib.h>

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

struct Array *Union(struct Array *arr1,struct Array *arr2)
{
    int i,j,k,x;
    i=j=k=0;

    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));

    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i];

    for(j=0;j<arr2->length;j++)
    {
        x=-1;
        for(i=0;i<arr1->length;i++)
            {
                if(arr2->A[j]==arr1->A[i])
                x=i;
            }
        if(x==-1)
            arr3->A[k++]=arr2->A[j];
    }

    arr3->length=k;
    arr3->size=10;

    return arr3;
}

struct Array *Intersection(struct Array *arr1,struct Array *arr2)
{
    int i,j,k,x;
    i=j=k=0;

    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));

    for(j=0;j<arr2->length;j++)
    {
        x=-1;
        for(i=0;i<arr1->length;i++)
            {
                if(arr2->A[j]==arr1->A[i])
                x=1;
            }
        if(x==1)
            arr3->A[k++]=arr2->A[j];
    }

    arr3->length=k;
    arr3->size=10;

    return arr3;
}

struct Array *Difference(struct Array *arr1,struct Array *arr2)
{
    int i,j,k,x;
    i=j=k=0;

    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));

    for(i=0;i<arr1->length;i++)
    {
        x=-1;
        for(j=0;j<arr2->length;j++)
            {
                if(arr1->A[j]==arr2->A[i])
                    x=i;
            }
        if(x==-1)
            arr3->A[k++]=arr2->A[i];
    }

    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i];

    arr3->length=k;
    arr3->size=10;

    return arr3;
}

int main()
{

    struct Array arr1={{2,9,21,28,35},10,5};
    struct Array arr2={{2,3,16,18,28},10,5};
    struct Array *arr3;

    arr3=Union(&arr1,&arr2);
    Display(*arr3);

    arr3=Intersection(&arr1,&arr2);
    Display(*arr3);

    arr3=Difference(&arr1,&arr2);
    Display(*arr3);

    return 0;
}
