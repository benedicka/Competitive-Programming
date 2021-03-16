#include<string>
#include<iostream>
#include<string.h>
using namespace std;
void Swap(int &a , int &b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
long long Max(long long a,long long b)
{
	if(a>b) return a;
	return b;
}
int main()
{
    string x,y;
    cin>>x>>y;
    for(int i=0;i<x.size();i++) printf("%d",((int)x[i]-'0')^((int)y[i]-'0'));
    cout<<endl;
    return 0;
}