#include <bits/stdc++.h>
using namespace std;

string func(string s){
    int n=s.size();
    bool allcaps=true;
    for(int i=1;i<n;i++){
        if(s[i]>'Z'){
            allcaps=false;
            break;
        }
    }
    if(!allcaps) return s;
    string ans="";
    for(int i=0;i<n;i++){
        if(s[i]>'Z') ans+=s[i]-'a'+'A'; 
        else ans+=s[i]-'A'+'a';
    }
    return ans;
}

void solve() {
    string s;
    cin>>s;
    cout<< func(s)<<endl;
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