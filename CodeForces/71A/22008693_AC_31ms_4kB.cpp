#include<string>
#include<iostream>
using namespace std;

int main()
{
	string x;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		cin>>x;
		if(x.size()<=10) cout<<x<<endl;
		else
		{
			cout<<x[0]<<x.size()-2<<x[x.size()-1]<<endl;
		}
	}
  	return 0;
}