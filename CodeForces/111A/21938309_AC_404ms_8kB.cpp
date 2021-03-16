
#include <iostream>
#include <string>
using namespace std;
int main()
{
  long long n,x,y;
  cin>>n>>x>>y;
  if(((y-n+1)*(y-n+1)+n-1<x) || (n>y)) cout<<-1<<endl;
  else
  {
      cout<<y-n+1<<endl;
      for(int i=1;i<n;i++) cout<<1<<endl;
  }
  return 0;
}
