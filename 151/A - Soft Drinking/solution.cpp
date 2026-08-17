#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>> c>> d>> p>> nl>> np;
    int totalml=k*l;
    int toast=totalml/nl;
    int lime=c*d;
    int salt=p/np;
    cout<<(min(toast,min(lime,salt)))/n;
    return 0 ;
}