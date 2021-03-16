#include<map>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	string input,x;
	map < string , int > mp;
	int n,size;
	scanf("%d",&n);
	while(n--)
	{
		x.clear();
		cin>>input;
		cout<<mp[input]<<endl;
		size = input.size();
		for(int i=0;i<size;i++)
		{
			x+=input[i];
			mp[x]++;
		}
	}
	
	return 0;
}