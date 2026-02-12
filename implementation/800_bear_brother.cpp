#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b;
    cin>>a;
    cin>>b;
    int ans=0;
    while(a<=b){
        a=3*a;
        b=2*b;
        ans++;
    }
    cout<< ans<<endl;
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