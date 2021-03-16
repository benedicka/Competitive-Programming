#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stack>
#include<ctype.h>
using namespace std;
int n,y,x;
int main()
{
    scanf("%d",&n);
    x = 1;
    y = n*n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j!=1) printf(" ");
            if(j%2==1)
            {
                printf("%d",x);
                x++;
            }
            else
            {
                printf("%d",y);
                y--;
            }
        }
        printf("\n");
    }
    return 0;
}

