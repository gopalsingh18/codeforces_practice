#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>>s;
    int count=0;
    for(char c :s){
        if(c=='4' || c=='7') count++;
    }
    if(count==4 || count==7) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
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