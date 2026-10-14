#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int sum=0,neg=0;
        for (int i=0;i<n;i++){
            int x;
            cin>>x;
            sum+=x;
            if(x==-1) neg++;
        }
        int ops=0;
        while(sum < 0) {
            sum+=2;
            neg--;
            ops++;
        }
        if(neg%2==1) ops++;
        cout<<ops<<endl;
    }
    return 0;
}