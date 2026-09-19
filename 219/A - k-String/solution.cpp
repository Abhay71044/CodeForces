#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin >> k;
    string s;
    cin >> s;
    vector<int> freq(26, 0);
    for (char ch : s) {
        freq[ch - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (freq[i] % k != 0) {
            cout << -1;
            return 0;
        }
    }
    string part = "";
    for (int i = 0; i < 26; i++) {
        part += string(freq[i] / k, char('a' + i));
    }
    for (int i = 0; i < k; i++) {
        cout << part;
    }
    return 0;
}