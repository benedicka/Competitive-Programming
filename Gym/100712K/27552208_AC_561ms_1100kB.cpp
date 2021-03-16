#include<bits/stdc++.h>

using namespace std;

int  main() {

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  int val;

  while(t--) {
    int n;
    map<int,int> mp;
    int k;
    cin >> n >> k;
    
    for(int i = 0; i < n; i++) {
      cin >> val;
      mp[val]++;
    }

    bool can = false;

    for(int i = 1; i <= k; i++) {
      if(k % i == 0) {
        if(k/i == i && mp[i] >= 2) {
          can = true;
          cout << i << " " << k/i << '\n';
          break;
        }
        else if(k/i != i && mp[i] && mp[k/i]) {
          can = true;
          cout << i << " " << k/i << '\n';
          break;
        }
      }
    }

    if(!can) {
      cout << -1 << '\n';
    }
  }

  return 0;
}