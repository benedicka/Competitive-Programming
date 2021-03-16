#include<bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long x1,x2,y1,y2;
	cin>>x1>>y1>>x2>>y2;
	if(x1*x1+y1*y1==x2*x2+y2*y2) cout<<"Empate"<<endl;
	else if(x1*x1+y1*y1<x2*x2+y2*y2) cout<<"Russo"<<endl;
	else cout<<"Wil"<<endl;
	return 0;
}