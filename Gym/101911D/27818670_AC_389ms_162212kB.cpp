#include<bits/stdc++.h>
using namespace std;
const int maxSize = 1e7;
int n,m,c[200010],jum[maxSize+10];
vector < int > pos[maxSize+10];
pair < int , int >  ans[200010];
bool ok = 1;
int main() {
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&c[n]);
        jum[c[n]]++;
        pos[c[n]].push_back(i);
        if(jum[c[n]]==1) n++;
    }

    for(int i=0;i<n;i++)
    {
        int cnt = 0;
        for(int j=1;j*j<=c[i];j++)
        {
            if(c[i]%j==0)
            {
                ans[pos[c[i]][cnt]]= make_pair(j,c[i]/j);
                cnt++;
                if(cnt==pos[c[i]].size()) break;
                if(j!=c[i]/j) 
                {
                   ans[pos[c[i]][cnt]]= make_pair(c[i]/j,j);
                    cnt++;
                }
                if(cnt==pos[c[i]].size()) break;
            }
        }
        if(cnt!=pos[c[i]].size()) ok = 0;
        if(!ok) break;               
    }
    printf("%s\n",ok?"YES":"NO");
    if(ok)
    {
         for(int i=0;i<m;i++)
         {
             printf("%d %d\n",ans[i].first,ans[i].second);
         }
    }
    return 0;
}