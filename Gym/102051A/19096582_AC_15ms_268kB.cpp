#include <bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
using namespace std;

typedef long long LL;

int a,b,k,len;
int cnt[30];
string s;

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	memset(cnt,0,sizeof(cnt));
	
	cin >> a >> b >> k;
	while(a--){
		cin >> s;
		len = s.size();
		for(int i=0;i<len;++i) cnt[s[i]-'a']++;
	}
	
	bool flag = 1;
	while(b--){
		cin >> s;
		len = s.size();
		for(int i=0;i<len;++i){
			int x = (s[i]-'a'+k)%26;
//			cout << (char)(x+'A') << endl;
			if(cnt[x] > 0){
				cnt[x]--;
			}else{
				flag = 0;
			}
			if(!flag) break;
		}
	}
	
	if(!flag) cout << "It is gonna be daijoubu.\n";
	else cout << "Make her kokoro go doki-doki!\n";
	
	return 0;
}