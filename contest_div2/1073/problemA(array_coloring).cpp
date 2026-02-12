#include <bits/stdc++.h>
using namespace std;

string func(vector<int>&input){
    int n=input.size();
    vector<pair<int,char>>temp;
    for(int i=0;i<n;i++){
        if(i%2==0){
            temp.push_back({input[i],'R'});
        }
        else{
            temp.push_back({input[i],'B'});
        }
    }
    sort(temp.begin(),temp.end());
    for(int i=0;i<n-1;i++){
        if(temp[i].second==temp[i+1].second) return "NO";
    }
    return "YES";
}

void solve() {
    int n;
    cin>>n;
    vector<int>input;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        input.push_back(m);
    }
    string ans= func(input);
    cout<< ans<< endl;
    
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