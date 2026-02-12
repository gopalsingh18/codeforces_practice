#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>>s;
    int n=s[0]-'0';
    int ans=(n-1)*10;
    int m=s.size();
    for(int i=1;i<=m;i++) ans+=i;
    cout<<ans<<endl;
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