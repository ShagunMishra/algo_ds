#include <stdio.h>
#include <stdlib.h>

// reverse a given string by comparing characters

int main()
{
    char A[]="python";
    char t;
    int i,j;
    for(i=0;A[i]!='\0';i++){}
    i=i-1;
    for(j=0;j<i;i--,j++)
    {
        t=A[j];
        A[j]=A[i];
        A[i]=t;
    }
    printf("%s ",A);
    return 0;
}
