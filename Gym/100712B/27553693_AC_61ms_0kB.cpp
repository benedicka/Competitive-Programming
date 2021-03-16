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
    string s;
    cin >> s;

    int prefix[n+1][3];
    prefix[0][0] = prefix[0][1] = prefix[0][2] = 0;

    for(int i = 0; i < n; i++) {
      for(int j = 0; j < 3; j++) {
        prefix[i+1][j] = prefix[i][j];
      }
      switch(s[i]) {
        case 'R':
          prefix[i+1][0]++;
          break;
        case 'P':
          prefix[i+1][1]++;
          break;
        case 'S':
          prefix[i+1][2]++;
          break;
      }      
    }

    int ans = 0;
    int wins, lose = 0;

    for(int i = 0; i <= n; i++) {
      wins = 0, lose = 0;

      wins += prefix[i][2];
      lose += prefix[i][1];
      wins += prefix[n][1] - prefix[i][1];
      lose += prefix[n][0] - prefix[i][0];

      if(wins > lose) {
        ans++;
      } 
    }

    for(int i = 1; i <= n; i++) {
      for(int j = i; j <= n; j++) {
        wins = 0, lose = 0;
        
        wins += prefix[i-1][2];
        lose += prefix[i-1][1];

        wins += prefix[j][0] - prefix[i-1][0];
        lose += prefix[j][2] - prefix[i-1][2];

        wins += prefix[n][1] - prefix[j][1];
        lose += prefix[n][0] - prefix[j][0];        

        if(wins > lose) ans++;
      }
    }

    cout << ans << '\n';
  }

  return 0;
}