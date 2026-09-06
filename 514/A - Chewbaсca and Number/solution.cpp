#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    cin>>x;
    for(int i=0;i<x.size();i++){
        int d=x[i]-'0';
        int inv=9-d;
        int best=min(d,inv);
        if(i==0 && best==0){
            continue;
        } 
        x[i]='0'+best;
    }
    cout<<x<<endl;
    return 0;
}