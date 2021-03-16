#include <string>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <map>
#include <queue>
using namespace std;
map < string , priority_queue < int > > mp;
int n,d,prv;
string c;
bool ok =1;
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        cin>>c;
        scanf("%d",&d);
        mp[c].push(d*-1);
    }
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        cin>>c;
       // printf("c : %d\n",prv);
        while(!mp[c].empty() && mp[c].top()*-1<=prv)
        {
            mp[c].pop();
        }
        if(mp[c].empty())
        {
            ok = 0;
            continue;
        }
        else{
            prv = mp[c].top()*-1;
            mp[c].pop();
        }
    }
    printf("%s\n",ok?"Yes":"No");
    return 0;
}
