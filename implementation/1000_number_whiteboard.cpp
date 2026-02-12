#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    cout<< 2 << endl;
    int a=n;
    int b=n-1;
    while(a>0 && b>0){
        cout<< a << " " << b << endl;
        a=ceil((a+b+1)/2);
        b=b-1;
    }

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