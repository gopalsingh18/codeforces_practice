#include <bits/stdc++.h>
using namespace std;

int func(vector<pair<int,int>>&input){
    int n=input.size();
    int ans=0;
    int prev=0;
    for(int i=0;i<n;i++){
        prev+=input[i].second-input[i].first;
        ans=max(ans,prev);
    }
    return ans;
}

void solve() {
    int n;
    cin>>n;
    vector<pair<int,int>>input;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x;
        cin>>y;
        input.push_back({x,y});
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

    solve();
    return 0;
}