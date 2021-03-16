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
    vector<int> v(n);

    int bonus = 100;

    for(int i = 0; i < n; i++) {
      cin >> v[i];
      bonus = min(bonus,100-v[i]);
    }

    int cnt = 0;
    for(auto &e : v) {
      if(e+bonus >= 50) cnt++;
    }
    cout << cnt << '\n';
  }

  return 0;
}