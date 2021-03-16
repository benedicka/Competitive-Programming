#include<bits/stdc++.h>

using namespace std;

#define llu unsigned long long int

llu dp[12][12][12];
llu hostage[11][11][11];

int main() {

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  freopen("commandos.in","r",stdin);

  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    llu f,y,x,h;
    
    memset(hostage,0,sizeof(hostage));
    memset(dp,0,sizeof(dp));

    for(int i = 0; i < n; i++) {
      cin >> f >> y >> x >> h;
      hostage[f][y][x] = h;
    }

    for(int i = 10; i >= 1; i--) {
      for(int j = 1; j <= 10; j++) {
        for(int k = 1;  k <= 10; k++) {
          llu temp = max(dp[i+1][j][k],max(dp[i][j-1][k],dp[i][j][k-1]));
          dp[i][j][k] = max(dp[i][j][k], temp + hostage[i][j][k]);
        }
      }
    }

    cout << dp[1][10][10] << '\n';
  }

  return 0;
}
