#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stack>
#include<ctype.h>
using namespace std;
string x;
char a;
int l,cnt;
int main()
{
    cin>>x;
    cnt=1;
    a = x[0];
    for(int i=1;i<=x.size();i++)
    {
        if(a!=x[i])
        {
            cout<<a<<cnt;
            a = x[i];
            cnt = 0;
        }
        cnt++;
    }
    printf("\n");
    return 0;
}
