#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int flag=1;
    int freq[26]={0};
    for(auto ch:s){
        freq[ch-'a']++;
    }
    int odd=0;
    for(auto it:freq){
        if(it % 2 != 0){
            odd++;
        }
    }
    if(odd<=1 || odd %2 == 1){
        cout<<"First";
    }
    else{
        cout<<"Second";
    }
    return 0;
}