#include <bits/stdc++.h>
using namespace std;

int func(vector<string>&st){
    int ans=0;
    int n=st.size();
    for(int i=0;i<n;i++){
        if(st[i][1] == '+') ans++;
        else ans--;
    }
    return ans;
}

void solve() {
    int n;
    cin>>n;
    vector<string>st;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        st.push_back(s);
    }
    cout<< func(st)<< endl;
    
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