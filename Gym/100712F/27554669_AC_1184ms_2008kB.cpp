#include<bits/stdc++.h>

using namespace std;

#define ll long long int

#define fi first
#define se second

int parent[(int)1e5 + 1];

void init() {
  for(int i = 0; i <= 1e5; i++) parent[i] = i;
}

int root(int x) {

  if(x == parent[x]) return x;

  return x = root(parent[x]);
}

int  main() {

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while(t--) {
    int n,m;
    cin >> n >> m;
    init();
    int ans = 0;

    vector<pair<int,pair<int,int>>> vec(m);

    for(int i = 0; i < m; i++) {
      cin >> vec[i].se.fi >> vec[i].se.se >> vec[i].fi;
    }

    sort(vec.begin(),vec.end());

    for(auto &edge : vec) {
      int ra = root(edge.se.fi);
      int rb = root(edge.se.se);

      if(ra != rb) {
        ans = max(edge.fi,ans);
        parent[ra] = rb;
      }
    }

    cout << ans << '\n';
  }

  return 0;
}