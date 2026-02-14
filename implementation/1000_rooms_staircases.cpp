#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    int first=-1, last=-1;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            if(first==-1)first=i;
            last=i;
        }
    }
    if(first==-1){
        cout<<n<<endl;
    }
    else{
        int left=2*(last+1);
        int right=2*(n-first);
        cout<<max(left,right)<<endl;
    }
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