#include <bits/stdc++.h>
using namespace std;

vector<int> func(int n){
    vector<int>p(n);
    p[0]=0;
    for(int i=1;i<n;i++){
        if(i%2==1){
            p[i]=p[i-1]+i;
        }
        else p[i]=p[i-1]-i;
    }
    int mini=p[0];
    for(int x : p) mini= min(mini,x);
    for(int i=0;i<n;i++){
        p[i]=p[i]-mini+1;
    }
    return p;
}

void solve() {
    int n;
    cin>>n;
    vector<int>output=func(n);
    for(int i=0;i<n;i++){
        cout<< output[i] << " ";
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

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}