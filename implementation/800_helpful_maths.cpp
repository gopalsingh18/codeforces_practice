#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>>s;
    string temp="";
    for(char c :s){
        if(c=='+') continue;
        temp+=c;
    }
    int n=temp.size();
    sort(temp.begin(),temp.end());
    for(int i=0;i<n;i++){
        if(i==n-1) cout<<temp[i];
        else cout<<temp[i]<<'+';
    }
    cout<<endl;
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