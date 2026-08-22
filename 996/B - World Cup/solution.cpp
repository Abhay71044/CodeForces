#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int mini = INT_MAX;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int time;
        if (arr[i] <= i) {
            time = i;
        }
        else {
            int k = (arr[i] - i + n - 1) / n;
            time = i + k * n;
        }
        if (time < mini) {
            mini = time;
            ans = i + 1;
        }
    }
    cout << ans << endl;
    return 0;
}