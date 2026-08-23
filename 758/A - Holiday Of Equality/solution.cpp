#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi=0;
    for(int i=0;i<arr.size();i++){
        maxi=max(maxi,arr[i]);
    }
    int total=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=maxi){
            total=total+(maxi-arr[i]);
        }
    }
    cout<<total;
    return 0;
}