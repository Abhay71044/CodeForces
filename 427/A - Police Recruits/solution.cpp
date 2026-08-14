#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=1){
            sum+=arr[i];
        }
        else{
            if(sum>0){
                sum+=arr[i];
            }
            else{
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}