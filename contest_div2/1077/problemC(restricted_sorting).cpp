#include <bits/stdc++.h>
using namespace std;

int func(vector<int>&nums){
    int n=nums.size();
    if(n==1 || is_sorted(nums.begin(),nums.end())) return -1;
    vector<int>temp=nums;
    sort(temp.begin(),temp.end());
    int maxi=temp[n-1];
    int mini=temp[0];
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        if(nums[i]!=temp[i]){
            int d1= abs(nums[i]-mini);
            int d2= abs(nums[i]-maxi);
            ans=min(ans,max(d1,d2));
        }
    }
    return ans;
}

void solve() {
    int n;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        nums.push_back(m);
    }
    cout<<func(nums)<<endl;
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