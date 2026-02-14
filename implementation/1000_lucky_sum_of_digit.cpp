#include <bits/stdc++.h>
using namespace std;

string func(int n){
    string ans="";
    for(int x=n/7;x>=0;x--){
        int rem=n-7*x;
        if(rem%4==0){
            for(int i=0;i<rem/4;i++){
                ans+='4';
            }
            for(int i=0;i<x;i++){
                ans+='7';
            }
            return ans;
        }
    }
    return "-1";
}

void solve() {
    int n;
    cin >> n;
    cout<< func(n)<<endl;
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