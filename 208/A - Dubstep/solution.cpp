#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    string ans = "";
    int i = 0;
    while (i < s.size()) {
        if (s.substr(i, 3) == "WUB") {
            if (!ans.empty() && ans.back() != ' ') {
                ans += ' ';
            }
            i += 3;
        }
        else {
            ans += s[i];
            i++;
        }
    }
    if (!ans.empty() && ans.back() == ' ') {
        ans.pop_back();
    }
    cout << ans;
    return 0;
}