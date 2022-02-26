#include <stdio.h>
#include <stdlib.h>

//find duplictae in string using hashtable

int main()
{

    char A[]="finding";
    int H[26]={0},i;

    for(i=0;A[i]!='\0';i++)
    {
        H[A[i]-97]++;
    }
    for(i=0;i<26;i++)
    {
        if(H[i]>1)
        {
            printf("\nDuplicate letter is: %c",i+97);
            printf("\n%c occur %d times",i+97,H[i]);
        }
    }
    return 0;
}
