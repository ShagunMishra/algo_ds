#include <stdio.h>
#include <stdlib.h>

// reverse a given string using another array

int main()
{
    char A[]="python";
    char B[7];
    int i,j;
    for(i=0;A[i]!='\0';i++){}
    i=i-1;
    for(j=0;i>=0;i--,j++)
        B[j]=A[i];
    B[j]='\0';
    printf("%s ",B);
    return 0;
}
