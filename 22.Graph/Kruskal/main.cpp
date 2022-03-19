#include<stdio.h>
#include <iostream>
#define I 65535

using namespace std;

int edge[3][9]={{1,1,2,2,3,4,4,5,5},
                {2,6,3,7,4,5,7,6,7},
                {25,5,12,10,8,16,14,20,18}};

int s[8]={-1,-1,-1,-1,-1,-1,-1,-1};
int included[9]={0};
int t[2][6];
void join(int u, int v)
{
    if(s[u]<s[v])
    {
        s[u]+=s[v];
        s[v]=u;
    }
    else
    {
        s[v]+=s[u];
        s[u]=v;
    }
}

int find(int u)
{
    int x=u,v=0;
    while(s[x]>0)
    {
        x=s[x];
    }
    while(u!=x)
    {
        v=s[u];
        s[u]=x;
        u=v;
    }
    return x;
}

int main()
{
    int u,v,i,j,k,mi=I,n=7,e=9;
    i=0;

    while(i<n-1)
    {
        mi=I;
        for(j=0;j<e;j++)
        {
            if(included[j]==0 && edge[2][j]<mi)
            {
                mi=edge[2][j];
                u=edge[0][j];
                v=edge[1][j];
                k=j;
            }
        }
        if(find(u)!=find(v))
        {
            t[0][i]=u;
            t[1][i]=v;
            join(find(u),find(v));
            i++;
        }
            included[k]=1;
    }
    printf("Spanning Tree\n");
    for(i=0;i<n-1;i++)
    {
        printf("(%d,%d)\n",t[0][i],t[1][i]);
    }
    return 0;
}
