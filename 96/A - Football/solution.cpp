#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int zero=0;
    int one=0;
    int maxi=INT_MIN;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            zero++;
            one=0;
            maxi=max(maxi,zero);
        }
        else{
            one++;
            zero=0;
            maxi=max(maxi,one);
        }
    }
    if(maxi>=7) cout<<"YES";
    else cout<<"NO";
    return 0;
}