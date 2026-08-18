#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s="";
    while(n>0){
        if((n-1)==0){
            s+="I hate it";
        }
        else{
            s+="I hate that ";
        }
        n=n-1;
        if(n==0) break;
        if(n!=0 && n-1==0){
            s+="I love it";
        }
        else{
            s+="I love that ";
        }
        n=n-1;
    }
    cout<<s;
    return 0;
}