#include <bits/stdc++.h>
using namespace std;

string func(string s){
    int n=s.size();
    for(int i=0;i<n;i++){
        int digit=s[i]-'0';
        int comp= 9-digit;
        if(comp<digit){
            if(i==0 && comp==0) continue;
            s[i]=comp+'0';
        }
    }
    return s;
}

void solve() {
    string s;
    cin>> s;
    cout<< func(s)<< endl;
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