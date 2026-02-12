#include <bits/stdc++.h>
using namespace std;

int func(vector<vector<int>>&mat){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(mat[i][j]==1){
                return abs(i-2)+abs(j-2);
            }
        }
    }
    return -1;
}

void solve() {
    vector<vector<int>>matrix(5,vector<int>(5,-1));
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int n;
            cin>>n;
            matrix[i][j]=n;
        }
    }
    cout<< func(matrix) << endl;
    
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