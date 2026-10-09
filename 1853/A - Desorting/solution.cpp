#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=INT_MAX;
        bool sorted=true;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                sorted=false;
                break;
            }
            ans=min(ans,arr[i+1]-arr[i]);
        }
        if(!sorted){
            cout<<0<<endl;
        }
        else{
            cout<<ans/2 +1<<endl;
        }
    }
    return 0;
}