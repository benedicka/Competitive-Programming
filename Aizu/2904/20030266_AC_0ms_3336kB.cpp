#include <string>
#include <iostream>
using namespace std;
int cnt,ans;
string x;
int main()
{
    cin>>x;
    for(int i=0;i<x.size();i++)
    {
        if(x[i]=='R') cnt++;
        else if(x[i]=='L') cnt--;
                
        if(cnt==4)
        {
            ans++;
            cnt  = 0;
        }
        else if(cnt==-4)
        {
            cnt=0;
        }
    }
    printf("%d\n",ans);
    return 0;
}
