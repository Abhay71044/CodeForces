#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    unordered_map<string ,int>mp={{"Tetrahedron",4},{"Cube",6},{"Octahedron" ,8},{"Dodecahedron",12},{"Icosahedron",20}};
    int total=0;
    while(t--){
        string s;
        cin>>s;
        total+=mp[s];
    }
    cout<<total;
    return 0;
}