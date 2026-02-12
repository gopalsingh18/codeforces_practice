#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    bool flag=true;
    while(n>0){
        int m;
        cin>>m;
        if(m==0) n--;
        else{
            cout<<"HARD"<<endl;
            flag=false;
            break;
        }
    }
    if(flag) cout<<"EASY"<<endl;
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