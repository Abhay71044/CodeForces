#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ans;
        int place=1;
        while(n){
            int digit=n%10;
            if(digit!=0){
                ans.push_back(digit*place);
            }
            n=n/10;
            place=place*10;
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}