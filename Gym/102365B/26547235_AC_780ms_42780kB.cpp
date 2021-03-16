#include<bits/stdc++.h>

using namespace std;

vector<string> name;

struct status {
  int hp;
  int atk;
  int def;
};

struct x {
  int a;
  int b;
  int c;
};

status stats[101];

bool check(status a, status b) {
  
  int atk_a = max(0,a.atk - b.def);
  int atk_b = max(0,b.atk - a.def);

  int turn_a;
  int turn_b;

  if(atk_a) turn_a = (b.hp / atk_a) + (b.hp % atk_a != 0);
  else turn_a = -1;

  if(atk_b) turn_b = (a.hp / atk_b) + (a.hp % atk_b != 0);
  else turn_b = -1;

  if(turn_a != -1 && turn_b != -1) {
    return turn_a < turn_b;
  }

  return turn_a != -1;
}

map<pair<int,pair<int,int>>,bool>  mp;

int main() {

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  for(int i = 0; i < n; i++) {
    string g;
    status c;
    cin >> g >> c.hp >> c.atk >> c.def;
    name.push_back(g);
    stats[i] = c;
  }

  vector<x> indexes;

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      for(int k = 0; k < n; k++) {
        if(i == j || j == k || i == k) continue;
        if(!mp[make_pair(i,make_pair(j,k))] && !mp[(make_pair(j,make_pair(k,i)))] && !mp[make_pair(k,make_pair(i,j))]) {
          if(check(stats[i],stats[j]) && check(stats[j],stats[k]) && check(stats[k],stats[i])) {
            x bread;
            bread.a = i;
            bread.b = j;
            bread.c = k;
            indexes.push_back(bread);
          }
        }
        mp[make_pair(i,make_pair(j,k))] = true;
      }
    }
  }

  cout << indexes.size() << '\n';

  for(auto &x : indexes) {
    cout << name[x.a] << " " << name[x.b] << " " << name[x.c] << '\n';
  }

  return 0;
}