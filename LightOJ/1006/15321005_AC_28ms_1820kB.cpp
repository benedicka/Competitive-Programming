#include<stdio.h>
#include<string.h>
#include<algorithm>
#define mod 10000007
using namespace std;
long t;
int a, b, c, d, e, f,x[100010];
int fn( int n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    if(x[n]!=-1) return x[n];
    return x[n] = ( fn(n-1) % mod+ fn(n-2) % mod+ fn(n-3) % mod+ fn(n-4) % mod+ fn(n-5)% mod + fn(n-6)% mod )% mod;
}
int main() {
    int n, caseno = 0, cases;
    
    scanf("%d", &cases);
    while( cases-- ) {
		memset(x,-1,sizeof(x));
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}