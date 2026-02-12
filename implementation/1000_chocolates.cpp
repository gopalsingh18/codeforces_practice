#include <bits/stdc++.h>
using namespace std;

long long func(vector<int> a){
    int n=a.size();
    bool flag=false;
    long long ans=a[n-1];
    for(int i=n-2;i>=0;i--){
        if(a[i+1]>a[i]) ans+=a[i];
        else if(a[i+1]<=a[i]){
            if(a[i+1]-1==0) flag=true;
            else{
                a[i]=a[i+1]-1;
                ans+=a[i];
            }
        }
        if(flag) break;
    }
    return ans;
}

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cout<< func(a)<<endl;
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