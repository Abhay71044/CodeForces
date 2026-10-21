#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int total=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==2)
                total++;
        }
        if(total%2 != 0) {
            cout<<-1<<endl;
            continue;
        }
        int cnt=0;
        int ans=-1;
        for (int i=0;i<n-1;i++) {
            if(a[i]==2)
                cnt++;
            if(cnt==total / 2) {
                ans=i+1;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}