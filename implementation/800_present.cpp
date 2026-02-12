#include <bits/stdc++.h>
using namespace std;

vector<int>func(vector<int>&input){
    int n=input.size();
    vector<int>ans(n,-1);
    for(int i=0;i<n;i++){
        ans[input[i]-1]=i+1;
    }
    return ans;
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
    vector<int>output=func(input);
    for(int i=0;i<n;i++){
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

    solve();
    return 0;
}