#include<bits/stdc++.h>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m;
    cin >> n >> m;
    
    
    int larger = 0;
    int smaller = 0;
       
    int val;
    for(int i = 0; i < n; i++) {
        cin >> val;
        if(val >= m) larger++;
        else smaller++;
    }
    
    cout << max(0,larger-smaller) << '\n';
    
    return 0;
}