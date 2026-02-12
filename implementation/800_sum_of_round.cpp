#include <bits/stdc++.h>
using namespace std;

vector<int>func(string s){
    int n=s.size();
    if(n==1) return {s[0]-'0'};
    vector<int>ans;
    for(int i=0;i<n;i++){
        int val= s[i]-'0';
        val= val*pow(10,n-i-1);
        if(val!=0)ans.push_back(val);
    }
    return ans;
}

void solve() {
    string n;
    cin>>n;
    vector<int>output= func(n);
    cout<< output.size() << endl;
    int m=output.size();
    for(int i=0;i<m;i++){
        cout<<output[i]<<" ";
    }
    cout<<endl;
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