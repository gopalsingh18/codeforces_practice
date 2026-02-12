#include <bits/stdc++.h>
using namespace std;

vector<int>func(int h,vector<int>&a,vector<pair<int,int>>&operation){
    int n=operation.size();
    int m=a.size();
    vector<int>temp=a;
    vector<int>modified_indices;
    vector<bool>is_modified(m, false);
    for(int i=0;i<n;i++){
        int b=operation[i].first;
        int c=operation[i].second;
        if((long long)a[b-1]+c>h){
            for(int idx : modified_indices) {
                a[idx] = temp[idx];
                is_modified[idx] = false;
            }
            modified_indices.clear();
        }
        else{
            if (!is_modified[b - 1]){
                is_modified[b - 1] = true;
                modified_indices.push_back(b - 1);
            }
            a[b-1]+=c;
        }
    }
    return a;
}

void solve() {
    int n,m,h;
    cin>>n;
    cin>>m;
    cin>>h;
    vector<int>a;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        a.push_back(k);
    }
    vector<pair<int,int>>operation;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x;
        cin>>y;
        operation.push_back({x,y});
    }
    vector<int>output= func(h,a,operation);
    int z=output.size();
    for(int i=0;i<z;i++){
        cout<<output[i]<<" ";
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