#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int>st;
    while(n++){
        int temp=n;
        while(temp>0){
            int rem=temp%10;
            st.insert(rem);
            temp/=10;
        }
        if(st.size()==4){
            cout<<n<<endl;
            break;
        }
        st.clear();
    }
    return 0;
}