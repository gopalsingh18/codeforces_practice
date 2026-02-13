#include <bits/stdc++.h>
using namespace std;

bool helper(vector<int>&days,int i,int x,int y){
    int n=days.size();
    for(int j=i-1;j>=i-x&& j>=0;j--){
        if(days[j]<=days[i]) return false;
    }
    for(int j=i+1;j<=i+y && j<n;j++){
        if(days[j]<=days[i]) return false;
    }
    return true;
}

int func(vector<int>&days,int x,int y){
    int n=days.size();
    for(int i=0;i<n;i++){
        if(helper(days,i,x,y)) return i+1;
    }
    return -1;
}
void solve() {
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cout<< func(a,x,y)<<endl;
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