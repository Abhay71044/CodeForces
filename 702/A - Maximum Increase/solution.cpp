#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int maxi=1;
    int count=1;
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]<arr[i+1]){
            count++;
            maxi=max(maxi,count);
        }
        else{
            count=1;
        }
    }
    cout<<maxi;
    return 0;
}