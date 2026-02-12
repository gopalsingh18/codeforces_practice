#include <bits/stdc++.h>
using namespace std;

int func(int n,vector<int>&page){
    int cnt=0;
    int m=page.size();
    int i=0;
    while(n>0){
        n=n-page[i%m];
        i++;
        cnt++;
        cnt=cnt%7;
    }
    if(cnt==0) return 7;
    return cnt;
}

void solve() {
    int n;
    cin>>n;
    vector<int>input;
    for(int i=0;i<7;i++){
        int m;
        cin>>m;
        input.push_back(m);
    }
    cout<<func(n,input)<<endl;
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