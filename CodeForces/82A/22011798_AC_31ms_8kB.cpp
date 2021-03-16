#include<string>
#include<iostream>
#include<string.h>
using namespace std;
void Swap(int &a , int &b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
long long Max(long long a,long long b)
{
	if(a>b) return a;
	return b;
}
int main()
{
	int n,x[6]={1,1,1,1,1},cnt=0,i=0;
    string s[]={ "Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
 	scanf("%d",&n);
 	while(1)
 	{
 		cnt+=x[i];
		if(cnt>=n)
		{
			cout<<s[i]<<'\n';
		 	break;
		}	
		x[i]*=2;
		i+=1;
 		i%=5;	
	}
  	return 0;
}