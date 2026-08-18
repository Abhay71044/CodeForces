#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    long long totalodd=(n+1)/2;
    if(k<=totalodd){
        cout<<2*k-1;
    }
    else{
        cout<<(k-totalodd)*2;
    }
    return 0;
}