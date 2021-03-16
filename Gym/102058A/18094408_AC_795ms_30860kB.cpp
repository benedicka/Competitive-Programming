#include<bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define mp make_pair
typedef pair<int,int> pii;
const int SIZE=300005;
const int INF= 2e9;

int N, M;
vector<int> v[SIZE];
int degree[SIZE];
int val[SIZE];
bool vis[SIZE];
bool stk[SIZE];
stack<int> st;
struct segment{
	int l, r;
}seg[SIZE];

bool cyc(int x){
	vis[x] = true;
	stk[x] = true;
	bool res = false;
	
	for(int i = 0; i < v[x].size() && !res; ++i){
		int nx = v[x][i];
		if(vis[nx] && stk[nx]) res = true;
		else if(vis[nx]) continue;
		else res |= cyc(nx);
	}
	
	stk[x] = false;
	return res;
}


vector<int> add[SIZE];

void dfs(int x){
	if(val[x] != INF)return;
	val[x] = seg[x].r;
	for(int i = 0; i < v[x].size(); ++i){
		int nx = v[x][i];
		dfs(nx);
		val[x] = min(val[x], val[nx]);
	}
}

vector<int> order;
priority_queue<pii, vector<pii>, greater<pii> > pq;
void solve(){
	
	for(int i = 1; i <= N; ++i){
		if(degree[i] == 0)dfs(i);
	}
	for(int i=1;i<=N;i++) add[seg[i].l].pb(i);
	
	for(int i = 1; i <= N; ++i){
		for(int j = 0; j < add[i].size(); ++j){
			int id = add[i][j];
			if(degree[id] == 0) pq.push(pii(val[id], id));
		}
		
		while(!pq.empty() && pq.top().fi < i)pq.pop();
		
		if(pq.empty()){
			puts("-1");
			return;
		}
		
		int id = pq.top().se;
		pq.pop();
		
		order.pb(id);
		
		for(int j = 0; j < v[id].size(); ++j){
			int nx = v[id][j];
			degree[nx]--;
			if(degree[nx] == 0){
				if(seg[nx].l <= i)
					pq.push(pii(val[nx], nx));
				
			}
		}
	}
//	bool ok = true;
//	
//	for(int i = 1; i <= N; ++i){
//		for(int j = 0; j < v[i].size(); ++j){
//			int nx = v[i][j];
//			degree[nx]++;
//		}
//	}
//	
//	for(int i = 0; i < order.size(); ++i){
////		assert((i + 1) >= seg[order[i]].l && (i + 1) <= seg[order[i]].r);
//		assert(degree[order[i]] == 0);
//		
//		ok &= degree[order[i]] == 0;
//		ok &= (i + 1) >= seg[order[i]].l && (i + 1) <= seg[order[i]].r;
//		
//		for(int j = 0; j < v[order[i]].size(); ++j){
//			int nx = v[order[i]][j];
//			degree[nx]--;
//		}
//	}
	
//	if(!ok){
//		puts("-1");
//		return;
//	}
	
	for(int i = 0; i < order.size(); ++i){
		printf("%d\n",order[i]);
	}
}


int main (){
	
	int a, b;
	
	scanf("%d %d", &N, &M);
	for(int i=1;i<=N;i++){
		val[i] = INF;
		scanf("%d %d", &seg[i].l, &seg[i].r);
	}
	memset(degree,0,sizeof(degree));
	for(int j=0;j<M;j++){
		scanf("%d %d", &a, &b);
		v[a].pb(b);
		degree[b]++;
	}
	
	bool cycExist = false;
	
	for(int i = 1; i <= N && !cycExist; ++i){
		if(!vis[i]) cycExist |= cyc(i);
	}
	
	
	if(cycExist) printf("-1\n");
	else solve();
	
	return 0;
}