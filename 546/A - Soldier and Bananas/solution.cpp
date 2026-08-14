#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    long long ans=0;
    int i=1;
    while(w--){
        ans=ans+k*i;
        i++;
    }
    if(ans<=n) cout<<0;
    else cout<<ans-n;
    return 0;
}