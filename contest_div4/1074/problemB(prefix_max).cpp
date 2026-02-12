#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int temp=-1;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        temp=max(temp,m);
    }
    cout<< temp*n<< endl;
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