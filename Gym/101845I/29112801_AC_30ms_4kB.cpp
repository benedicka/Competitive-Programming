#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main() {

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  ll n,m;
  cin >> n >> m;

  bool arr[51] = {0};
  
  while(m--) {
    ll num,k;
    cin >> num >> k;
    ll spin = k % n;
    ll ans = 0;
    
    memset(arr,0,sizeof(arr));
    for(int i = 0; i < n; i++) {
      arr[(i+spin) % n] = num % 2LL;
      num /= 2;
    }

    ll prex = 1;
    for(int i = 0; i < n; i++) {
      if(arr[i]) ans += prex;
      prex *= 2LL;
    }
    cout << ans << '\n';
  }

  return 0;
}