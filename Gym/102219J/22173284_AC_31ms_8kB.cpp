#include<bits/stdc++.h>
using namespace std;
set< pair < char ,char > > larang;
int main()
{
	string s = "ABCDE";
	string inp;
	for(int i = 0; i < 5; i++) {
		cin >> inp;
		if(inp[1] == '>')larang.insert({inp[0],inp[2]});
		else larang.insert({inp[2],inp[0]});
	}	
	do
	{
		bool can = true;
		for(int i = 0; i < 5 && can; i++) {
			for(int j = i+1; j < 5 && can; j++) {
				if(larang.count({s[i],s[j]}))can = false;
			}
		}
		if(can) {
			cout << s << '\n';
			return 0;
		}
	}while(next_permutation(s.begin(),s.end()));
	cout << "impossible\n";
	return 0;
}