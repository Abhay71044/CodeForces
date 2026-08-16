#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=1;
    int i=1;
    int count=1;
    n=n-1;
    while(n>0){
        sum=sum+(++i);
        if(n>=sum){
            n=n-sum;
            count++;
        }
        else{
            break;
        }
    }
    cout<<count;
    return 0;
}