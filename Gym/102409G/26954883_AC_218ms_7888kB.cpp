#include<bits/stdc++.h>

using namespace std;

vector<int> generate(string s) {
    
    int sz = 1 << s.size();

    vector<int> ans;
    
    for(int i = 0; i < sz; i++) {
		int val = 0;
		int temp = i;
		// string x = "";
		for(int j = 0; j < s.size(); j++) {
			if(temp % 2) val += s[j];
			temp /= 2;
		}
		ans.push_back(val);
		// ref.push_back(x);
	}

	sort(ans.begin(),ans.end());   
    return ans;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int sz;

    vector<int> v;
    vector<int> ans;

    cin >> n;
    sz = 1 << n;
    v.reserve(sz);
    for(int i = 0; i < sz; i++) {
        cin >> v[i];
    }

    // string s = "00ABXabcdefghijkl";
    // sz = 1 << s.size();
    // v = generate(s);

    bool first = true;
    map<int,int> combo;

    for(int i = 1; i < sz && ans.size() < n; i++) {
        if(v[i] <= 90)ans.push_back(v[i]);
        else if(v[i] <= 122) {
            if(first) {
                for(int j = 0; j < ans.size(); j++) {
                    for(int k = j+1; k < ans.size(); k++) {
                        combo[ans[j]+ans[k]]++;
                    }
                }
                first = false;
            }
            
            if(combo[v[i]]) {
                combo[v[i]]--; 
            }
            else ans.push_back(v[i]);
        }
        // for(auto &e : ans)cout << e << " ";
        // cout << endl;
    }

    for(auto &e : ans) cout << (char)e;
    cout << '\n';

    return 0;
}