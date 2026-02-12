#include <bits/stdc++.h>
using namespace std;

int func(int a,int b,int n){
    int cnt=0;
    int maxi=max(a,b);
    int mini=min(a,b);
    while(maxi<=n){
        cnt++;
        mini+=maxi;
        if(mini>maxi) swap(mini,maxi);
    }
    return cnt;
}

void solve() {
    int a,b,n;
    cin>>a>>b>>n;
    cout<<func(a,b,n)<< endl;
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