#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<long long> a(n), b(m);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];
        long long height1 = a[0];
        long long height2 = b[0];
 
        long long cap1 = height1 + (n - 1); 
        long long cap2 = height2 + (m - 1); 
 
        if(cap1 >= cap2){
            cout << 1 << "
";
        } else {
            cout << 2 << "
";
        }
    }
    return 0;
}