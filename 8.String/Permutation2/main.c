#include <stdio.h>
#include <stdlib.h>

//find permutation of the string

void swap(char *x, char *y)
{
    char temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void perm(char s[],int l,int h)
{
    int i;
    if(l==h)
    {
        printf("%s ",s);
    }
    else
    {
        for(i=l;i<=h;i++)
        {
            swap(&s[l],&s[i]);
            perm(s,l+1,h);
            swap(&s[l],&s[i]);
        }
    }
}

int main()
{
    char s[]="ABC";
    perm(s,0,2);

    return 0;
}
