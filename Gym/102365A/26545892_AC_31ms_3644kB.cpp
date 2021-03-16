#include<iostream>

using namespace std;

#define ll long long int

int main() {

  char c;
  int n;
  string s;

  cin >> c >> n >> s;
  if(c == 'D')n *= -1;
  for(int i = 0; i < s.size(); i++) {
    s[i] = (((s[i] - 'a') + n) % 26) +'a';
    if(s[i] < 'a') s[i] = 'z' + (s[i]-'a'+1);
  }

  cout << s << '\n';

  return 0;
}