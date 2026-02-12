#include <bits/stdc++.h>
using namespace std;

void helper(int row,int col,vector<vector<char>>& mat,int& ans){
    int n=mat.size();
    int m=mat[0].size();
    while(row<n && col<m){
        if(mat[row][col]=='C') break;
        if(mat[row][col]=='R'){
            col+=1;
            if(col>=m){
                while(col>=m){
                    col-=1;
                    ans++;
                }
                mat[row][col]='D';
            }
        }
        if(mat[row][col]=='D'){
            row+=1;
            if(row>=n){
                while(row>=n){
                    row-=1;
                    ans++;
                }
                mat[row][col]='R';
            }
        }
    }
}

int func(vector<vector<char>>& mat){
    int n=mat.size();
    int m=mat[0].size();
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            helper(i,j,mat,ans);
        }
    }
    return ans;
}

void solve() {
    int n,m;
    cin>> n >> m;
    vector<vector<char>>mat(n,vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>> mat[i][j];
        }
    }
    cout<< func(mat) <<endl;
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