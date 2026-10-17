#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        int xr=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            xr^=arr[i];
        }
        if(n%2 == 1){
            cout<<xr<<endl;
        }
        else{
            cout<<(xr==0 ? 0 : -1)<<endl;
        }
    }
    return 0;
}