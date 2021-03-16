#include <iostream> 
#include <math.h>

using namespace std;
typedef unsigned long long int LL;

long long int mod = 1000000007;
LL modular (LL a, LL e) { 
  LL ret = 1;
  while (e) {
    if (e & 1) ret *= a, ret %= mod;
    a *= a, a %= mod, e >>= 1;
  }
  return ret;
}
unsigned long long breakInteger(unsigned long long int N) 
{ 
    if (N <= 4) return N;
  
    long long int maxProduct; 
    switch (N % 3) 
    { 
        case 0:
            maxProduct = modular(3, N/3); 
            break; 
        case 1: 
            maxProduct = 2 * 2 * modular(3, (N/3) - 1); 
            break; 
        case 2: 
            maxProduct = 2 * modular(3, N/3); 
            break; 
    } 
    return maxProduct; 
} 

int main() { 
    LL ans=0, in=0, a;
	cin >> in;
	
	ans = breakInteger(in) % mod;
    cout << ans << endl;
	
    return 0; 
} 