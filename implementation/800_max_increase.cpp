#include <bits/stdc++.h>
using namespace std;

int func(vector<int>&input){
    int n=input.size();
    int l=0;
    int h=0;
    int ans=1;
    while(h<n-1){
        if(input[h]>=input[h+1]) l=h+1;
        ans=max(ans,h-l+2);
        h++;
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