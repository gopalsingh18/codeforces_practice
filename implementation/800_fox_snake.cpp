#include <bits/stdc++.h>
using namespace std;

vector<vector<char>>func(int n,int m){
    vector<vector<char>>ans(n,vector<char>(m,'.'));
    bool last=true;
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                ans[i][j]='#';
            }
        }
        else{
            if(last){
                ans[i][m-1]='#';
                last=false;
            }
            else{
                ans[i][0]='#';
                last=true;
            }
        }
    }
    return ans;
}

void solve() {
    int n,m;
    cin>>n;
    cin>>m;
    vector<vector<char>>output= func(n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<< output[i][j];
        }
        cout<< endl;
    }
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