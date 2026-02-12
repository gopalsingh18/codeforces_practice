#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>>s;
    char c=s[0];
    s[0]= toupper(c);
    cout<<s<<endl;
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