#include <bits/stdc++.h>
using namespace std;

int sum(int a){
    int val=0;
    while(a>0){
        val+= a%10;
        a/=10;
    }
    return val;
}

int func(int x){
    if(x%9!=0) return 0;
    int ans=0;
    for(int i=x;i<=x+90;i++){
        if(i-sum(i)==x) ans++;
    }
    return ans;
}
void solve() {
    int x;
    cin>>x;
    cout<< func(x) << endl;
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