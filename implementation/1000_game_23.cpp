#include <bits/stdc++.h>
using namespace std;

int func(int n,int m){
    if(m%n!=0) return -1;
    int d=m/n;
    int ans=0;
    while(d%2==0){
        ans++;
        d/=2;
    }
    while(d%3==0){
        ans++;
        d/=3;
    }
    if(d==1) return ans;
    return -1;
}

void solve() {
    int n,m;
    cin>> n>> m;
    cout<< func(n,m)<<endl;
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