#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (is_sorted(s.begin(),s.end())){
        cout<< "Bob"<< endl;
        return;
    }
    int cnt=0;
    for(char c :s){
        if(c=='0') cnt++;
    }
    vector<int> moves;
    for(int i=0;i<n;i++){
        if(i<cnt) {
            if(s[i]=='1'){
                moves.push_back(i+1);
            }
        } 
        else {
            if(s[i]=='0'){
                moves.push_back(i + 1);
            }
        }
    }
    cout<< "Alice"<<endl;
    int m=moves.size();
    cout<< m<<endl;
    sort(moves.begin(),moves.end());
    for(int i=0;i<m;i++){
        cout<<moves[i]<<" ";
    }
    cout<<endl;
}
int main(){
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