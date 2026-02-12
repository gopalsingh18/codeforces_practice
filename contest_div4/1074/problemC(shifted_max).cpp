#include <bits/stdc++.h>
using namespace std;

int func(vector<int>&input){
    int n=input.size();
    sort(input.begin(),input.end());
    int ans=1;
    for(int i=0;i<n;i++){
        int count=1;
        while(i+1<n && (input[i]+1==input[i+1] || input[i]==input[i+1])){
            if(input[i]==input[i+1]){
                i++;
                continue;
            }
            count++;
            i++;
        }
        ans=max(ans,count);
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
    cout<< func(input)<< endl;
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