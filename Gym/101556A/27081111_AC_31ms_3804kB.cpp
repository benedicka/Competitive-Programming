#include<bits/stdc++.h>

using namespace std;

#define lld unsigned long long int
#define fi first
#define se second

map<string,vector<string>> mp;
map<string,pair<lld,lld>> val;
map<string,pair<string,string>> parent;

int main() {

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n,m;
  cin >> n >> m;

  string s;
  cin >> s;

  val[s] = {1LL << 62, 0};

  string child,p1,p2;

  for(int i = 0; i < n; i++) {
    cin >> child >> p1 >> p2;
    mp[p1].push_back(child);
    mp[p2].push_back(child);
    parent[child] = {p1,p2};
  }

  queue<string> q;  
  q.push(s);
  
  string origin = s;

  while(!q.empty()) {
    string node = q.front();
    if(node != origin) {
      p1 = parent[node].fi;
      p2 = parent[node].se;
      lld sum = val[p1].fi + val[p1].se + val[p2].se + val[p2].fi;
      val[node] = {sum / 2LL, sum % 2LL};
    }
    for(auto &e : mp[node]) {
      q.push(e);
    }
    q.pop();
  }

  pair<lld,string> ans;

  for(int i = 0; i < m; i++) {
    cin >> s;
    lld res = val[s].fi + val[s].se;
    ans = max(ans,{res,s});
  }

  cout << ans.se << '\n';

  return 0;
}