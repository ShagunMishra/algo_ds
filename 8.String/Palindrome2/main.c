#include <stdlib.h>
#include <stdio.h>

// check weather given string in palindrome or not

int main()
{
    char A[10]="madamn";
    char t=0;
    int i,j;
    for(i=0;A[i]!='\0';i++){}
    i=i-1;
    for(j=0;j<i;i--,j++)
    {
        if(A[i]==A[j])
            t++;
        else
        {
            t=0;
            break;
        }
    }

    if(t==0)
        printf("Given String is not Palindrome");
    else
        printf("Given string is Palindrome");

    return 0;
}
