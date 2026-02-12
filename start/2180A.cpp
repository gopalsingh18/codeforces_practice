#include <bits/stdc++.h>
using namespace std;

int func(int l,int a,int b){
    unordered_set<int>st;
    int ans=-1;
    int k=0;
    while(true){
        int val= (a+k*b)%l;
        if(st.count(val)){
            return ans;
        }
        st.insert(val);
        ans=max(ans,val);
        k++;
    }
    return -1;
}

void solve() {
    int l,a,b;
    cin>>l;
    cin>>a;
    cin>>b;
    cout<< func(l,a,b)<< endl;
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