#include <bits/stdc++.h>
using namespace std;

string func(vector<string>data){
    if(data.empty()) return "";
    int n=data.size();
    string ans=data[0];
    for(int i=1;i<n;i++){
        if(ans+data[i]<data[i]+ans) ans= ans+data[i];
        else ans=data[i]+ans;
    }
    return ans;
}
void solve() {
    int n;
    cin>>n;
    vector<string> input;
    for(int i=0;i<n;i++){
        string s;
        cin>> s;
        input.push_back(s);
    }
    string ans= func(input);
    cout<< ans << endl;
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