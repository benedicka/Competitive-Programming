#include<bits/stdc++.h>
using namespace std;
string x;
int t;

int main()
{
  scanf("%d",&t);
  while(t--)
  {
cin>>x;
if(x.size()<=10) cout<<x<<endl;
else
{
cout<<x[0]<<x.size()-2<<x[x.size()-1]<<endl;
}
  }
  return 0;
}