#include<math.h>
#include<iostream>
using namespace std;
long long n,cnt=0;
int main()
{
	cin>>n;
	while(pow(2,cnt)<n)
	{
		cnt++;
	}
	if(pow(2,cnt)==n) cout<<cnt+1<<endl;
	else cout<<cnt<<endl;
	return 0;
}