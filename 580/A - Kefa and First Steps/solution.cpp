#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count =0;
    int maxi=0;
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]<=arr[i+1]){
            count++;
            maxi=max(maxi,count);
        }
        else{
            count=0;
        }
    }
    cout<<maxi+1;
    return 0;
}