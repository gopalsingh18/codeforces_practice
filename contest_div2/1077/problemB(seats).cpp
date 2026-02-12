#include <bits/stdc++.h>
using namespace std;

int func(string s){
    int n=s.size();
    vector<int>one;
    for(int i=0;i<n;i++){
        if(s[i]=='1') one.push_back(i);
    }
    if(one.empty()) return (n+2)/3;
    int ans=0;
    int gap=one[0];
    ans+= (gap+1)/3;
    int m=one.size();
    for(int i=0;i<m-1;i++){
        int gap=one[i+1]-one[i]-1;
        ans+= gap/3;
    }
    int end=n-1-one.back();
    ans+= (end+1)/3;
    return ans+one.size();
}

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout<< func(s) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("C:/Users/gopal/OneDrive/Desktop/codeforces_practice/input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}