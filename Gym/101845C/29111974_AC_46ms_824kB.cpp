#include<bits/stdc++.h>

using namespace std;

#define ll long long int

ll cost[200][200];

int main() {

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  for(int i = 0; i < 200; i++) {
    for(int j = 0; j < 200; j++) {
      cost[i][j] = 1e9; 
    }
  }

  string s1,s2;
  cin >> s1 >> s2;

  int n;
  cin >> n;

  while(n--) {
    char a,b;
    int c;
    cin >> a >> b >> c;
    cost[a][b] = min(cost[a][b],(ll)c);
  }

  for(int k = 33; k <= 126; k++) {
    for(int i = 33; i <= 126; i++) {
      for(int j = 33; j <= 126; j++) {
        if(cost[i][k] != 1e9 && cost[k][j] != 1e9) 
          cost[i][j] = min(cost[i][j],cost[i][k] + cost[k][j]); 
      }
    }
  }
  
  ll ans = 0;

  for(int i = 0; i < s1.size(); i++) {
    if(s1[i] == s2[i]) continue;
    else if(cost[s1[i]][s2[i]] != 1e9) {
      ans += cost[s1[i]][s2[i]];
    }
    else {
      ans = -1;
      break;
    }
  }
  
  cout << ans << '\n';

  return 0;
}
