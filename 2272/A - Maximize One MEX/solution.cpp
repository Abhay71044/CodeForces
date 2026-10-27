#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n), idx(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            idx[arr[i]] = i;
        }
        int len = n - k + 1;
        vector<int> absent;
        for (int val = 0; val < len; val++) {
            if (idx[val] >= len) {
                absent.push_back(val);
            }
        }
        if (absent.empty()) {
            cout << -1 << '
';
            continue;
        }
        int need = len;
        if (absent.size() >= 2) {
            need = absent[1];
        }
        int first = -1;
        for (int j = 0; j < len; j++) {
            if (arr[j] >= need) {
                first = j;
                break;
            }
        }
        cout<<first+1<<" "<<idx[absent[0]]+1<<endl;
    }
    return 0;
}