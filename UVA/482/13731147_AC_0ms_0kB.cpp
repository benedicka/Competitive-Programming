#include<utility>
#include<string>
#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
	int t,n,idx[100010],size,temp;
	string ans[100010],input;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		
		while(input=="")
		{
			getline(cin,input);
			if(input!="") break;
		}

		n = 0;
		temp = 0;

		size = input.size();
		for(int j=0;j<size;j++)
		{
			if(!isdigit(input[j]))
			{
				temp/=10;
				idx[n] = temp;
				temp = 0;
				n++;
			}
			else
			{
				temp+=(input[j]-'0');
				temp*=10;
			}
		}
		idx[n] = temp/10;
		n++;

		for(int j=0;j<n;j++)
		{
			ans[idx[j]].clear();
			cin>>ans[idx[j]];
			if(j!=n-1)getchar();
		}
		
		for(int j=1;j<=n;j++)
		{
			cout<<ans[j]<<endl;
		}
		input.clear();
		if(i!=t) cout<<endl;
	}
	return 0;
}