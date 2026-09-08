#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                count++;
            }
            if(count==2){
                break;
            }
        }
        if(count==2){
            if(arr[0]==0 && arr[n-1]==0){
                cout<<0<<endl;
            }
            else if((arr[0]==0 && arr[n-1]==1) || (arr[0]==1 && arr[n-1]==0)){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}