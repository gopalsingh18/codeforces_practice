#include <bits/stdc++.h>
using namespace std;

void solve() {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
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

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}