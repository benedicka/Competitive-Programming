#include<bits/stdc++.h>

using namespace std;
set<int> s[(int)3e5+1];
vector<int> v(3e5+1);
bool visit[(int)3e5+1];
int main() {
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
  
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        s[v[i]].insert(i);
    }
    
        
    int m,q;
    cin >> m;
    while(m--) {
        cin >> q;
        if(visit[q]) continue;
       
        if(s[q].size() < 2) 
        {
            visit[q] = 1;
            continue;
        }
        int lo = *s[q].begin();
        int hi = *s[q].rbegin();
        
        for(int i = lo+1; i <= hi-1; i++) {
            s[v[i]].erase(i);
            while(visit[v[i]] && s[v[i]].size()>0)
            {
                i = *s[v[i]].begin();
                s[v[i]].erase(i);
            }
        }
        
        visit[q] = 1;
    }
    
    for(int i=0;i<=3e5;i++)
    {
        if(s[i].size() < 2 || !visit[i]) continue; 
        int lo = *s[i].begin();
        int hi = *s[i].rbegin();
        for(int j=lo;j<=hi;j++)
        {
              v[j] = i;
        }
    }
    
    for(int i = 0; i < n; i++) {
        if(i) cout << " ";
        cout << v[i];
    }
    cout << '\n';
    
    return 0;   
}