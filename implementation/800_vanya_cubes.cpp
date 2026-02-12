#include <bits/stdc++.h>
using namespace std;

int func(int n){
    int ans=0;
    int k=1;
    while(n>0){
        n=n- k*(k+1)/2;
        k++;
        if(n>=0)ans++;
    }
    return ans;
}

void solve() {
    int n;
    cin>>n;
    cout<<func(n)<<endl;
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