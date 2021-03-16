#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main() {

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  vector<ll> v(4);
  cin >> v[0] >> v[1] >> v[2] >> v[3];

  bool can = false;

  for(int i = 0; i < (1 << 4); i++) {
    if(__builtin_popcount(i) != 2) continue;
    ll temp = i;
    ll a = 0;
    ll b = 0;
    for(int j = 0; j < 4; j++) {
      if(temp % 2) a += v[j];
      else b += v[j];
      temp /= 2;
    }
    if(a == b) can = true;
  }

  if(can) cout << "YES\n";
  else cout << "NO\n";

  return 0;
}