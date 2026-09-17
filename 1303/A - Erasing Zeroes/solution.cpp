#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int first = -1;
        int last = -1;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '1') {
                first = i;
                break;
            }
        }
        for(int i = s.size() - 1; i >= 0; i--) {
            if(s[i] == '1') {
                last = i;
                break;
            }
        }
        int ans = 0;
        for(int i = first; i <= last; i++) {
            if(s[i] == '0') {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}