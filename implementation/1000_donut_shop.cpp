#include <bits/stdc++.h>
using namespace std;

pair<long long,long long> func(int a,int b,int c){
    long long shop1=-1;
    long long shop2=-1;
   if(a<c) shop1=1;
   if(c<(long long)a*b) shop2=b;
   return {shop1,shop2};
}

void solve() {
    int a,b,c;
    cin>>a >> b>>c;
    cout<< func(a,b,c).first<< " " << func(a,b,c).second<<endl;
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