#include<bits/stdc++.h>

using namespace std;

bool isThere[1001];

int main() {

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);

  string s;
  cin >> s;

  if(s.size() == 1) {
    cout << 0 << '\n';
    return 0;
  }

  int ans = 0;

  stack<int> st;

  for(auto &e : s) {
    if(e == '1') st.push(e);
    else if(e == '3') {
      if(!st.empty()) {
        st.pop();
        ans++;
      }
    }
  }

  cout << ans << '\n';

  return 0;
}