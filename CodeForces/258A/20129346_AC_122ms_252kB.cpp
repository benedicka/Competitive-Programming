#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stack>
#include<ctype.h>
using namespace std;
string x;
bool ok;
int main()
{
    cin>>x;
    for(int i=0;i<x.size();i++)
    {
        if(x[i]=='0' && !ok)
        {
            ok = 1;
            continue;
        }
        if(i==x.size()-1 && !ok)
        {
            continue;
        }
        cout<<x[i];
    }
    cout<<'\n';
    return 0;
}
