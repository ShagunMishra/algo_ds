#include <stdio.h>
#include <stdlib.h>

//to compare strings are equal or not

int main()
{
    char A[]="Painter";
    char B[]="Painting";
    int i,j;
    for(i=0,j=0; A[i]!='\0'&& B[j]!='\0'; j++,i++)
    {
        if(A[i]!=B[j])
            break;
    }
    if(A[i]==B[j]) printf("Equal");
    else if(A[i]<B[j]) printf("Unequal");
    else printf("Greater");
    return 0;
}
