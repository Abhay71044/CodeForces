#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mini=INT_MAX;
    int a=0;
    int b=0;
    for(int i=0;i<arr.size()-1;i++){
        if(abs(arr[i]-arr[i+1])<mini){
            mini=abs(arr[i]-arr[i+1]);
            a=i+1;
            b=i+2;
        }
    }
    if(abs(arr[0]-arr[arr.size()-1])<mini){
        a=arr.size();
        b=1;
    }
    cout<<a<<" "<<b;
    return 0;
}