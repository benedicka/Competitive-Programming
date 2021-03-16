#include<bits/stdc++.h>

using namespace std;

int  main() {

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;
    vector<pair<int,pair<int,string>>> v(n);

    for(int i = 0; i < n; i++) {
      cin >> v[i].second.second >> v[i].first >> v[i].second.first;
      v[i].second.first *= -1;
    }

    sort(v.rbegin(),v.rend());
    cout << v[0].second.second << '\n';
  }

  return 0;
}