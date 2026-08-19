#include<bits/stdc++.h>
using namespace std;
int main(){
    int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    int x=min({k2,k5,k6});
    int ans=x*256;
    k2=k2-x;
    x=min({k2,k3});
    ans=ans+x*32;
    cout<<ans;
    return 0;
}