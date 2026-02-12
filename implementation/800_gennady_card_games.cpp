#include <bits/stdc++.h>
using namespace std;

string func(string s,vector<string>&st){
    for(string str :st){
        if(s[0]==str[0] || s[1]==str[1]) return "YES";
    }
    return "NO";
}

void solve() {
    string s1;
    cin>>s1;
    vector<string>st;
    for(int i=0;i<5;i++){
        string s;
        cin>>s;
        st.push_back(s);
    }
    cout<< func(s1,st)<<endl;
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