#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>>s;
    unordered_set<char>st;
    for(char c :s){
        st.insert(c);
    }
    if(st.size()%2==0) cout <<"CHAT WITH HER!" <<endl;
    else cout<<"IGNORE HIM!"<<endl;
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