#include <bits/stdc++.h>
using namespace std;

int func(string s){
    int ans=0;
    int n=s.size();
    bool seenOne=false;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            seenOne=true;
        }
        else{
            if(seenOne){
                bool hasOneLater=false;
                for(int j=i+1;j<n;j++){
                    if(s[j]=='1'){
                        hasOneLater=true;
                        break;
                    }
                }
                if(hasOneLater) ans++;
            }
        }
    }
    return ans;
}


void solve() {
    string s;
    cin>>s;
    cout<<func(s)<<endl;
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