#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
string x;
int cnt[5];
int main()
{
    cin>>x;
    for(int i=0;i<x.size();i++)
    {
        cnt[x[i]-'a']++;
    }
    sort(cnt,cnt+3);
    
    printf("%s\n",cnt[2]-cnt[0]<=1?"YES":"NO");
    return 0;
}
