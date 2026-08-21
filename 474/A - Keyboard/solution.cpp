#include<bits/stdc++.h>
using namespace std;
int main(){
    char dire;
    cin>>dire;
    string s;
    cin>>s;
    string keyboard="qwertyuiopasdfghjkl;zxcvbnm,./";
    string ans="";
    for(char ch:s){
        int index=keyboard.find(ch);
        if(dire == 'R'){
            ans+=keyboard[index-1];
        }
        else{
            ans+=keyboard[index+1];
        }
    }
    cout<<ans;
    return 0;
}