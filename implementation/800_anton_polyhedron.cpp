#include <bits/stdc++.h>
using namespace std;

int func(vector<string>input){
    unordered_map<string,int>mpp;
    mpp["Tetrahedron"]=4;
    mpp["Cube"]=6;
    mpp["Octahedron"]=8;
    mpp["Dodecahedron"]=12;
    mpp["Icosahedron"]=20;
    int ans=0;
    for(auto st : input){
        ans+= mpp[st];
    }
    return ans;
}

void solve() {
    int n;
    cin>>n;
    vector<string>input;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        input.push_back(s);
    }
    cout<< func(input) <<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/gopal/OneDrive/Desktop/codeforces_practice/input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif

    solve();
    return 0;
}