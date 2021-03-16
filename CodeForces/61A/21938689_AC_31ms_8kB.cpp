#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.size();i++) printf("%d",((int)a[i]-'0')^((int)b[i]-'0'));
    cout<<endl;
    return 0;
}
