#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, n;
        cin >> x >> y >> n;
 
        long long ans = ((n - y) / x) * x + y;
 
        cout << ans << '
';
    }
    return 0;
}