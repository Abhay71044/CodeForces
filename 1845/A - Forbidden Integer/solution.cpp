#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;
 
        vector<int> ans;
 
        if (x != 1) {
            for (int i = 0; i < n; i++) {
                ans.push_back(1);
            }
        }
        else {
            if (k == 1) {
                cout << "NO" << endl;
                continue;
            }
 
            if (n % 2 == 0) {
                for (int i = 0; i < n / 2; i++) {
                    ans.push_back(2);
                }
            }
            else {
                if (k < 3 || n < 3) {
                    cout << "NO" << endl;
                    continue;
                }
 
                ans.push_back(3);
                for (int i = 0; i < (n - 3) / 2; i++) {
                    ans.push_back(2);
                }
            }
        }
 
        cout << "YES" << endl;
        cout << ans.size() << endl;
 
        for (int num : ans) {
            cout << num << " ";
        }
        cout << endl;
    }
 
    return 0;
}