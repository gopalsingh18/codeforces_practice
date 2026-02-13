#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    if(n==1){
        cout<<"NO"<<endl;
        return;
    }
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(s[i]!=s[i+1]){
            cout<<"YES"<<endl;
            cout<<s[i]<<s[i+1]<<endl;
            flag=false;
            return;
        }
    }
    if(flag) cout<<"NO"<<endl;
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