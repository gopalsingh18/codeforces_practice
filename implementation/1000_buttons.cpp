#include <bits/stdc++.h>
using namespace std;

long long func(int n){
    long long ans=0;
    for(int i=1;i<n;i++){
        int wrong=n-i;
        int recover=i;
        ans+= (wrong*recover)+1;
    }
    return ans;
}

void solve() {
    int n;
    cin>>n;
    cout<< func(n)+1<<endl;
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