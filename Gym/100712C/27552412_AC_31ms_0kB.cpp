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
    bool arr[n];
    memset(arr,0,sizeof(arr));

    char c;
    for(int i = 0; i < n; i++) {
      cin >> c;
      if(c == '*') {
        if(i) arr[i-1] = 1;
        if(i < n-1) arr[i+1] =1;
        arr[i] = 1; 
      }
    }

    int ans = 0;
    for(int i = 0; i < n-2; i++) {
      if(!arr[i] && !arr[i+1] && !arr[i+2]) {
        ans++;
        arr[i] = arr[i+1] = arr[i+2] = 1;
      }
    }

    for(int i = 0; i < n-1; i++) {
      if(!arr[i] && !arr[i+1]) {
        arr[i+1] = arr[i] = 1;
        ans++; 
      }
    }

    for(int i = 0; i < n; i++) {
      if(!arr[i]) ans++;
    }
    cout << ans << '\n';
  }

  return 0;
}