#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stack>
#include<ctype.h>
using namespace std;
int x;
int sumdigit(int a)
{
    int res = 0;
    while(a!=0)
    {
        res+=(a%10);
        a/=10;
    }
    return res;
}
int main()
{
    scanf("%d",&x);
    while(sumdigit(x)%4!=0)
    {
        x++;
    }
    printf("%d\n",x);
    return 0;
}

