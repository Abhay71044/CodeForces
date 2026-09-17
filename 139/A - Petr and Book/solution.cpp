#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(7);
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
    int total = 0;
    int i = 0;
    while(total < n) {
        total += arr[i];
        if(total >= n) {
            cout << i + 1;
            break;
        }
        i++;
        if(i == 7) {
            i = 0;
        }
    }
    return 0;
}