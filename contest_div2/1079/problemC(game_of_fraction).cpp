#include <bits/stdc++.h>
using namespace std;

string func(long long p,long long q){
    if(3*p>=2*q && p<q) return "Bob";
    return "Alice";
}

void solve() {
    long long p,q;
    cin>>p>>q;
    cout << func(p,q)<<endl;
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