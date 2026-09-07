#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int maxi=max(a,max(b,c));
    int mini=min(a,min(c,b));
    if(a==maxi && b==mini || a==mini && b==maxi){
        cout<<abs(a-c)+abs(c-b);
        return 0;
    }
    if(a==maxi && c==mini || a==mini && c==maxi){
        cout<<abs(a-b)+abs(b-c);
        return 0;
    }
    if(b==maxi && c==mini || b==mini && c==maxi){
        cout<<abs(b-a)+abs(a-c);
        return 0;
    }
}