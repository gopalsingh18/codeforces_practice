#include <bits/stdc++.h>
using namespace std;

int mini(int a,int b,int c){
    if(a<b && a<c) return a;
    else if(b<c) return b;
    return c;
}

int func(int n,int k,int l,int c,int d,int p,int nl,int np){
    int ml_req= k*l/nl;
    int slices_req= c*d/1;
    int salt_req= p/np;
    return mini(ml_req,slices_req,salt_req)/n;
}

void solve() {
    int  n, k, l, c, d, p, nl, np;
    cin>>n;
    cin>>k;
    cin>>l;
    cin>>c;
    cin>>d;
    cin>>p;
    cin>>nl;
    cin>>np;
    cout << func( n, k, l, c, d, p, nl, np)<< endl;
    
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