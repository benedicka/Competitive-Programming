#include <bits/stdc++.h>

using namespace std;

int main() {

  // freopen("input.txt","r",stdin);

  int n;
  cin >> n;
  vector<int> v(n);
  
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(),v.end());

  cout << max(0,(v[n-1]-v[0]) - (n-1)) << '\n';

  return 0;
}