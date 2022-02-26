#include <stdio.h>
#include <stdlib.h>

// check weather given string in palindrome or not

int main()
{
    char A[10]="madam";
    char B[10];
    char t;
    int i,j;
    for(i=0;A[i]!='\0';i++)//to copy string
    {
        B[i]=A[i];
    }
    B[i]=A[i];//to equate last index which store null value
    for(i=0;A[i]!='\0';i++){}//to find reverse
    i=i-1;
    for(j=0;j<i;i--,j++)
    {
        t=A[j];
        A[j]=A[i];
        A[i]=t;
    }
    for(i=0,j=0; A[i]!='\0'&& B[j]!='\0'; j++,i++)//to compare
    {
        if(A[i]!=B[j])
            break;
    }
    if(A[i]==B[j]) printf("Given String is Palindrome");
    else printf("Given string is not Palindrome");
    return 0;
}
