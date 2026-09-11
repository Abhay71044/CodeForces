#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int maxi=INT_MIN;
    int count=0;
    while(t--){
        int a,b;
        cin>>a>>b;
        maxi=max(maxi,count);
        count=count-a;
        count=count+b;
    }
    cout<<maxi;
    return 0;
}