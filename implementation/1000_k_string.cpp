#include <bits/stdc++.h>
using namespace std;

string func(int k,string s){
    map<char,int>mpp;
    for(char c : s){
        mpp[c]++;
    }
    string temp="";
    for(auto it : mpp){
        if(it.second%k!=0) return "-1";
        int a = it.second / k;
        temp += string(a, it.first);
    }
    string ans="";
    for(int i=0;i<k;i++) ans+=temp;
    return ans;
}

void solve() {
    int k;
    cin>>k;
    string s;
    cin>>s;
    cout<< func(k,s) <<endl;
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