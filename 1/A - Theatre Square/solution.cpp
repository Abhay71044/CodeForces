#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,a;
    cin>>n>>m>>a;
    long long x=ceil((n+a-1)/a);
    long long y=ceil((m+a-1)/a);
    cout<<y*x;
    return 0;
}