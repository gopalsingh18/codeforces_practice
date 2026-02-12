#include <bits/stdc++.h>
using namespace std;

int func(int n,int k){
    while(k>0){
        if(n%10==0 && n>9) n=n/10;
        else n--;
        k--;
    }
    return n;
}

void solve() {
    int n;
    cin>>n;
    int k;
    cin>>k;
    cout << func(n,k)<<endl;
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