#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m,d;
    cin>>n>>m>>d;
    vector<int> ar;
    set<int> st;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        ar.push_back(x);
        st.insert(x);
    }
    int day=1;
    map<int,int> ans;
    while(1){
        if(st.empty())break;
        int ctime=*st.begin();
        ans[ctime]=day;
        st.erase(st.begin());
        ctime=ctime+d+1;
        while(1){
            if(ctime>m)break;
            auto nx=st.upper_bound(ctime-1);
            if(nx==st.end())break;
            ans[*nx]=day;
            ctime=*nx+d+1;
            st.erase(nx);
        }
        day++;
    }
    cout<<day-1<<endl;
    int fi=0;
    for(int i:ar){
        if(fi)cout<<" ";
        cout<<ans[i];
        fi++;
    }
    
    cout<<endl;
    return 0;
}