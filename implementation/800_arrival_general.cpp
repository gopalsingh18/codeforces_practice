#include <bits/stdc++.h>
using namespace std;

int func(vector<int>&input){
    int n=input.size();
    int maxi=INT_MIN, mini=INT_MAX, maxi_ind=-1,mini_ind=-1;
    for(int i=0;i<n;i++){
        if(input[i]>maxi){
            maxi=input[i];
            maxi_ind=i;
        }
        if(input[i]<=mini){
            mini=input[i];
            mini_ind=i;
        }
    }
    int ans= maxi_ind+ (n-1-mini_ind);
    if(maxi_ind>mini_ind) return ans-1;
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
    cout<<func(input)<<endl;
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