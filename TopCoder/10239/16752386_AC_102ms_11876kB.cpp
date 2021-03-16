#include<bits/stdc++.h>
using namespace std;
const int mod=1000000007;
long long fast(long long a, long long x)
{
	long long res = 1;
	while(x > 0)
	{
	    if( x % 2 != 0)
		{
	        res = (res * a) % mod;
	    }
	    a = (a * a) % mod;
	    x /= 2;
	}
	return res;
}
long long inversemod(long long a)
{
	return fast(a, mod-2);
}
long combination(long long n, long long k) 	
{
	cout<<n<<" "<<k<<endl;
    long long a = 1;
    for (int i=0; i<k; i++)
	{
       	a*=(n-i); 
	  	a%=mod;
   	}
   	//cout<<"a = "<<a<<endl;
   	long long b = 1; 
   	for (int i=1; i<=k; i++)
	{
       	b*=i;
       	b%=mod;
    }
    	//cout<<"b = "<<b<<endl;
    return (a*inversemod(b)) % mod;
} 
class SuperSum 
{
	public:
	int calculate(int k, int n)
	{
		long long res;
		//cout<<k<<" "<<n<<endl;
		res = (combination((long long)n+k,(long long)k+1));		
    	return (int)res;
	}
};
//int main()
//{
//	supersum x;
//	cout<<x.calculate(10,35)<<endl;
//}