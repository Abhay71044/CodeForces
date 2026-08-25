#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        string ans = "";
        for(int i = 0; i < s.size(); i += 2) {
            ans.push_back(s[i]);
        }
        ans.push_back(s[s.size() - 1]);
        cout << ans << endl;
    }
    return 0;
}