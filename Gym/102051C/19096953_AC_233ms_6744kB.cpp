#include <bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
using namespace std;

typedef long long LL;

const int N = 1e5;

struct edge{
	int a, b;
};

int dset[N+10], cnt[N+10];
int V,E,k;
vector <edge> g;
map <string,int> m;

int findParent(int x){
	if(dset[x] == x) return dset[x];
	return dset[x] = findParent(dset[x]);
}

bool isSame(int a, int b){
	int pa = findParent(a);
	int pb = findParent(b);
	
	if(pa == pb) return 1;
	return 0;
}

void uni(int a, int b){
	int pa = findParent(a);
	int pb = findParent(b);
	
	if(pa == pb) return;
	if(pa < pb){
		dset[pb] = pa;
		cnt[pa] += cnt[pb];
		cnt[pb] = 0;	
	}else{
		dset[pa] = pb;
		cnt[pb] += cnt[pa];
		cnt[pa] = 0;	
	}
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	string s1,s2;
	int ctr = 1;
	
	cin >> V >> E >> k;
	for(int i=1;i<=V;++i){
		dset[i] = i;
		cnt[i] = 1;	
	}
	for(int i=0;i<E;++i){
		cin >> s1 >> s2;
		edge ed;
		if(m[s1] == 0)m[s1] = ctr++;	
		ed.a = m[s1];
		
		if(m[s2] == 0) m[s2] = ctr++;
		ed.b = m[s2];
		
		g.pb(ed);
	}
	
	for(int i=0;i<E;++i){
//		cout << g[i].a << " " << g[i].b << endl;
		if(!isSame(g[i].a, g[i].b)){
			uni(g[i].a,g[i].b);
//			cout << cnt[g[i].a] << " " << cnt[g[i].b] << endl;
		}
	}
	
	sort(cnt+1,cnt+V+1);
	LL sum = 0;
	for(int i=V;i>=1;--i){
		sum += cnt[i];
		k--;
		if(!k) break;
	}
	
	cout << sum << endl;
	
	return 0;
}