#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k,n,w;
    cin>>k;
    cin>>n;
    cin>>w;
    long long ans= 1LL*k*w*(w+1)/2- n;
    if(ans<0) ans=0;
    cout<< ans<< endl;
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