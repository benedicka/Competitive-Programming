#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	int n;
	string input;
	map < string , int > m;
	cin>>n;
	while(n--)
	{
		cin>>input;
		if(m[input]==0) 
		{
			m[input]++;
			cout<<"OK"<<endl;
		}
		else
		{
			cout<<input<<m[input]<<endl;
			m[input]++;
		}
	}
    return 0;
}