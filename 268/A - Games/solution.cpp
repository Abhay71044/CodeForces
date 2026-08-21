#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>arr1;
    vector<int>arr2;
    while(t--){
        int h,a;
        cin>>h>>a;
        arr1.push_back(h);
        arr2.push_back(a);
    }
    int count=0;
    for(int i=0;i<arr1.size();i++){
        for(int j=0;j<arr2.size();j++){
            if(arr1[i]==arr2[j]){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}