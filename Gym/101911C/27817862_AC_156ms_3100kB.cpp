#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main() {
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    ll ans = 0;
    
    priority_queue<ll,vector<ll>,greater<ll>> pq;
    
    ll val;
    for(int i = 0; i < n; i++) {
        cin >> val;
        pq.push(val);
    }
    
    while(pq.size() > 1) {
        ll a = pq.top();
        pq.pop();
        ll b = pq.top();
        
        ll temp = a;
        while(temp < b) {
            temp += temp;
            ans++;
        }
        if(temp != b) {
            cout << -1 << '\n';
            return 0;
        }
        pq.push(2*b);
        pq.pop();
    }
    
    cout << ans << '\n';
    
    return 0;
}