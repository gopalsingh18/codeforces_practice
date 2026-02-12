#include <bits/stdc++.h>
using namespace std;

int func(vector<int>input){
    int n=input.size();
    int ans=0;
    for(int i=0;i<n;i++){
        if(input[i]==INT_MIN) continue;
        for(int j=i+1;j<n;j++){
            if(input[j]==INT_MIN) continue;
            if(input[i]>input[j]){
                input[j]=INT_MIN;
                ans++;
            }
        }
    }
    return ans;
}

void solve() {
    int n;
    cin>>n;
    vector<int>input;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        input.push_back(a);
    }
    cout<< func(input) << endl;
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