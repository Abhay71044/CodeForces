#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s.size()<26) cout<<"NO";
    else{
        vector<int>arr(26,0);
        for(int i=0;i<s.size();i++){
            char ch=tolower(s[i]);
            arr[ch-'a']++;
        }
        int flag=1;
        for(int i=0;i<26;i++){
            if(arr[i]==0){
                flag=0;
                break;
            }
        }
        if(flag==0){
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
    }
    return 0;
}