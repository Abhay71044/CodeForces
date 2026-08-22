#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr(4);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int maxi=0;
    for(int i=0;i<arr.size();i++){
        maxi=max(arr[i],maxi);
    }
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=maxi){
            ans.push_back(maxi-arr[i]);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}