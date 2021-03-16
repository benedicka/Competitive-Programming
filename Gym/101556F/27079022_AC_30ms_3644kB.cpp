#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pd pair<double,double>
#define pi pair<int,int>
#define pll pair<ll,ll>
#define fi first
#define se second
#define endl "\n"
#define debug(x) cout << (#x) << " : " << (x) << endl
using namespace std;
int main(){
	ios::sync_with_stdio(false);cin.tie(NULL);
	int cas;
	cin>>cas;
	while(cas--){
		string a;
		cin>>a;
		if(a=="P=NP"){
			cout<<"skipped\n";
			continue;
		}
		int n=(int)a.size();
		int i=0;
		for(i=0;i<n;++i){
			if(a[i]=='+')break;
		}
		string x=a.substr(0,i);
		string y=a.substr(i+1);
		int a1=stoi(x);
		int a2=stoi(y);
		cout<<a1+a2<<endl;
	}
	return 0;
}
