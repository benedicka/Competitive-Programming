#include <iostream> 
#include <math.h>

using namespace std;
typedef unsigned long long int LL;

long int mem[100000005] = {};
long long int mod = 1000000007;

unsigned long long int modular(int base, unsigned long long int power) {
    if(power == 1) return base;
    
    long long int m = modular(base, power / 2) % mod;
    
    if(power < 100000005) {
        if(mem[power] != 0) return mem[power];
    }
    
    if(power % 2 == 0) {
        if(power < 100000005) return mem[power] = (m * m) % mod; 
        return (m * m) % mod;
    }
    if(power < 100000005) return mem[power] = base * (modular(base, power - 1) % mod) % mod;
    return base * (m * m) % mod;
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