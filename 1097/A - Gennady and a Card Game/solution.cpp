#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<string>arr(5);
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int flag=0;
    for(int i=0;i<5;i++){
        if(s[0]==arr[i][0] || s[1]==arr[i][1]){
            flag=1;
            break;
        }
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
    return 0;
}