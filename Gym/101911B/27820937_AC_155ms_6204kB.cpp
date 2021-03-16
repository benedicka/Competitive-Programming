#include<bits/stdc++.h>

using namespace std;


using ll=long long;
int main() {
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,h;
    cin>>n>>h;
    vector<pair<ll,ll>> a;
    for(int i=0;i<n;++i){
        ll x,y;
        cin>>x>>y;
        a.push_back({x,y});
    }
    if(n==1){
        cout<<a[0].second-a[0].first+h<<endl;
        return 0;
    }
    ll ans=0;
    for(int l=0,r=0;;){
        if(r+1<n&&a[r+1].first-a[r].second<h){
            h-=(a[r+1].first-a[r].second);
            r++;
        }
        else{
            h+=(a[l+1].first-a[l].second);
            l++;
        }
        ans=max(ans,a[r].second-a[l].first+h);
        if(r==n-1)break;
    }
    cout<<ans<<endl;
    return 0;   
}