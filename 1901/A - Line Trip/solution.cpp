#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<long long>a;
        a.push_back(0);
        for(int i=0;i<n;i++){
            long long points;
            cin>>points;
            a.push_back(points);
        }
        a.push_back(x);
        long long maxi=0;
        for(int i=1;i<a.size();i++){
            if(i == a.size()-1){
                maxi=max(maxi,2*(a[i]-a[i-1]));
            }
            else{
                maxi=max(maxi,a[i]-a[i-1]);
            }
        }
        cout<<maxi<<endl;
    }
    return 0;
}