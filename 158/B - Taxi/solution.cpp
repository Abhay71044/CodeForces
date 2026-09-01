#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int cnt[5] = {0};
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        cnt[x]++;
    }
    int taxis = cnt[4] + cnt[3] + cnt[2]/2 + cnt[2]%2;
    int freeSeats = cnt[3] + (cnt[2]%2)*2;
    cnt[1] -= min(cnt[1], freeSeats);
    taxis += (cnt[1] + 3) / 4;
    cout << taxis << endl;
    return 0;
}