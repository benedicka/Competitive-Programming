#include<iostream>
using namespace std;


int main()
{
	int t;
	int a,b,c;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>a;
		cin>>b;
		cin>>c;
		printf("Case %d: ",i+1);
		if(a>20 || b>20 || c>20) cout<<"bad"<<endl;
		else cout<<"good"<<endl;
	}
	
	
	return 0;
}