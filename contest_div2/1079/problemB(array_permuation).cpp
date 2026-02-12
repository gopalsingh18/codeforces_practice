#include <bits/stdc++.h>
using namespace std;

string func(vector<int>&p ,vector<int>&a){
    int n=p.size();
    vector<int>temp(n+1);
    for(int i=0;i<n;i++){
        temp[p[i]]=i;
    }
    int ind=-1;
    for(int i=0;i<n;i++){
        if(i==0 || a[i]!=a[i-1]){
            int curr_val = a[i];
            int curr_ind = temp[curr_val];
            if(curr_ind < ind) return "NO";
            ind=curr_ind;
        }
    }
    return "YES";
}

void solve() {
    int n;
    cin>>n;
    vector<int>p;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        p.push_back(m);
    }
    vector<int>a;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        a.push_back(m);
    }
    cout<< func(p,a)<<endl;
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