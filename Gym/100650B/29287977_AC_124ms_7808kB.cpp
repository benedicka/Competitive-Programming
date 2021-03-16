#include<bits/stdc++.h>

#define fi first
#define se second
#define endl '\n'

using namespace std;

map<string,bool> vs;
map<string,vector<string>> mp;
map<string,vector<int>> ans;

int gen_cnt;

vector<int> dfs(string x) {

  if(vs[x]) return ans[x];

  vs[x] = true;

  vector<int> cnt(gen_cnt);
  cnt[0] = mp[x].size();

  for(auto &e : mp[x]) {
    vector<int> tmp = dfs(e);

    for(int i = 1; i < gen_cnt; i++) {
      cnt[i] += tmp[i-1];
    } 
  }
  
  // cout << x << " ";
  for(int i = 0; i < gen_cnt; i++) {
    ans[x].push_back(cnt[i]);
    // cout << cnt[i] << " ";
  }
  // cout << endl;

  return ans[x];
}

int main() {

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  int tc = 1;

  while(t--) {
    int n,m;
    cin >> n >> m;
    gen_cnt = m; 
    mp.clear(); vs.clear();
    ans.clear();

    string src,dst;
    int cnt;
    for(int i = 0; i < n; i++) {
      cin >> src >> cnt;
      for(int j = 0; j < cnt; j++) {
        cin >> dst;
        mp[src].push_back(dst);
      }
    }

    for(auto &e : mp) ans[e.fi].reserve(m);

    for(auto &e : mp) {
      dfs(e.fi);
    }

    map<int,set<string>> names;

    for(auto &e : mp) {
      names[-ans[e.fi][m-1]].insert(e.fi);
    }

    int rep = 3;

    if(tc > 1) cout << '\n';

    cout << "Tree " << tc++ << ":\n";
    for(auto &e : names) {
      if(rep <=0 || e.fi == 0) break;
      for(auto &name : e.se) {
        cout << name << " " << -e.fi << endl;
        rep--;
      }
    }
  }

  return 0;
}