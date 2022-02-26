#include <stdio.h>
#include <stdlib.h>

// Find duplicate in the string

int main()
{
    int i;
    char lD='\0';
    char A[]="finding";
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]==A[i+1] && A[i]!=lD)
        {
            printf("\nDuplicate letter is: %c",A[i]);
            lD=A[i];
        }
    }
    return 0;
}
