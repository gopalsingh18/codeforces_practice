#include <bits/stdc++.h>
using namespace std;

int func(vector<int>& nums){
    sort(nums.begin(),nums.end());
    int n=nums.size();
    return nums[n/2]- nums[n/2-1];
}

void solve() {
    int n;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<2*n;i++){
        int a;
        cin>>a;
        nums.push_back(a);
    }
    cout<< func(nums)<< endl;
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