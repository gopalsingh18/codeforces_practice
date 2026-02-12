#include <bits/stdc++.h>
using namespace std;

string func(vector<int>&input){
    int n=input.size();
    int cnt_zero=0;
    int cnt_ones=0;
    for(int i=0;i<n;i++){
        if(input[i]==0) cnt_zero++;
        if(input[i]==1) cnt_ones++;
    }
    if(cnt_zero==0 || (cnt_zero>1 && cnt_ones==0)) return "NO";
    return "YES";
}

void solve() {
    int n;
    cin>>n;
    vector<int>input;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        input.push_back(m);
    }
    cout<< func(input)<<endl;
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