#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,x,y,g;
    cin>>a>>b>>x>>y;
    g = __gcd(x,y);
    x/=g;
    y/=g;
    cout<<(long long)min(floor(a/x),floor(b/y))<<endl;
    return 0;
}