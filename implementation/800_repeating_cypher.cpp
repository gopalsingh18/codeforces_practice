#include <bits/stdc++.h>
using namespace std;

string func(string s){
    string ans="";
    int n=s.size();
    int k=1;
    for(int i=0;i<n;i+=k){
        ans+= s[i];
        k++;
    }
    return ans;
}

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout << func(s) <<endl;
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