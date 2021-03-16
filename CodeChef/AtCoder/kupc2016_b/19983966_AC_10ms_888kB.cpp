#include <iostream>
#include <queue>
#include <stdio.h>
using namespace std;
int n,k,ans,cnt[30],tmp[30],jum;
string x;
priority_queue < int > pq;
int main()
{
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
        cin>>x;
        cnt[x[0]-'A']++;
    }
    for(int i=0;i<26;i++)
    {
        if(cnt[i]) pq.push(cnt[i]);
    }
    while(pq.size()>=k)
    {
        jum = 0;
        for(int i=0;i<k;i++)
        {
            
            tmp[jum++] = pq.top()-1;
            pq.pop();
        }
        ans++;
        for(int i=0;i<jum;i++)
        {
            if(tmp[i]) pq.push(tmp[i]);
        }
    }
    printf("%d\n",ans);
    return 0;
}
