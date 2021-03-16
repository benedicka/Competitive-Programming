#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main() {
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m;
    cin >> n >> m;
    
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    
    ll ans = 0;
    ans += ((y1-1) % 2) * (x2-x1+1);
    ans += ((m-y2) % 2) * (x2-x1+1);
    ans += (m % 2) * (n-(x2-x1+1));
    
    cout << ans / 2 + ans % 2 << "\n";
    
    return 0;
}