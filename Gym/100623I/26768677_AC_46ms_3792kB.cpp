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
	// ios::sync_with_stdio(false);cin.tie(NULL);
	freopen("important.in","r",stdin);
	freopen("important.out","w",stdout);
	int n;
	cin>>n;
	vector<string> in;getchar();
	for(int i=0;i<n;++i){
		string a;
		getline(cin,a);
		int cnt=0;
		for(int j=0;j<(int)a.size();++j){
			if(a[j]==':')break;
			cnt++;
		}
		string nw=a.substr(0,cnt);
		in.pb(nw);
	}
	cout<<"Yes\n";
	for(int i=0;i<(int)in.size();++i){
		if(i){
			cout<<"|"<<in[i];
		}
		else{
			cout<<in[i];
		}
	}
	cout<<"|~"<<in[0];
	cout<<endl;
	return 0;
}

