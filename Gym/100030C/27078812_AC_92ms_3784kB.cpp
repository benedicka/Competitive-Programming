#include<bits/stdc++.h>

using namespace std;

#define lld long long int

const lld MOD = 1e9 + 7;

int nCrModp(lld n, lld r, lld p) 
{ 
    // Optimization for the cases when r is large 
    if (r > n - r) 
        r = n - r; 
  
    // The array C is going to store last row of 
    // pascal triangle at the end. And last entry 
    // of last row is nCr 
    lld C[r + 1]; 
    memset(C, 0, sizeof(C)); 
  
    C[0] = 1; // Top row of Pascal Triangle 
  
    // One by constructs remaining rows of Pascal 
    // Triangle from top to bottom 
    for (lld i = 1; i <= n; i++) { 
  
        // Fill entries of current row using previous 
        // row values 
        for (int j = min(i, r); j > 0; j--)
            // nCj = (n-1)Cj + (n-1)C(j-1); 
            C[j] = (C[j] + C[j - 1]) % p; 
    } 
    return C[r]; 
} 

int main() {

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);

  lld n,m;
  cin >> n >> m;

  if(m < n) {
    cout << 0 << '\n';
  }
  else {
    cout << nCrModp(m,n,MOD) << '\n'; 
  }

  return 0;
}