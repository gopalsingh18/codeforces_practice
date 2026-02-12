#include <bits/stdc++.h>
using namespace std;

int maxi(int a,int b,int c){
    if(a>b && a>c) return a;
    else if(b>c) return b;
    else return c;
}
int mini(int a,int b,int c){
    if(a<b && a<c) return a;
    else if(b<c) return b;
    else return c;
}

int func(int a,int b,int c){
    int end=maxi(a,b,c);
    int start= mini(a,b,c);
    return end-start;
}

void solve() {
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<< func(a,b,c)<< endl;
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