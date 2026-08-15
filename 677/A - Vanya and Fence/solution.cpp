#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int width=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=h) width++;
        else width=width+2;
    }
    cout<<width;
    return 0;
}