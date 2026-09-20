#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> a;
    for (int i = 1; i <= n; i++) {
        int days;
        cin>>days;
        a.push_back({days, i});
    }
    sort(a.begin(), a.end());
    vector<int> ans;
    int total = 0;
    for (auto it : a) {
        if (total + it.first <= k) {
            total += it.first;
            ans.push_back(it.second);
        }
        else {
            break;
        }
    }
    cout << ans.size() << endl;
    for (int index : ans) {
        cout << index << " ";
    }
    cout << endl;
    return 0;
}