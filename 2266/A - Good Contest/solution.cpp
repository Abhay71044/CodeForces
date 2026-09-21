#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a,b,c;
        cin>>a>>b>>c;
        int maxi=0;
        maxi=max(maxi,(n-a));
        maxi=max(maxi,(n-b));
        maxi=max(maxi,(n-c));
        cout<<maxi<<endl;
    }
    return 0;
}