#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int maxidx=0;
    int minidx=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>arr[maxidx]){
            maxidx=i;
        }
        if(arr[i]<=arr[minidx]){
            minidx=i;
        }
    }
    int ans=maxidx+(n-1-minidx);
    if(maxidx>minidx){
        ans--;
    }
    cout<<ans;
    return 0;
}