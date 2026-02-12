#include <bits/stdc++.h>
using namespace std;

string func(string s){
    string ans="";
    int n=s.size();
    for(int i=0;i<n;i++){
        s[i]= tolower(s[i]);
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y') continue;
        ans= ans+'.'+s[i];
    }
    return ans;
}

void solve() {
    string s;
    cin>>s;
    cout<< func(s)<< endl;
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