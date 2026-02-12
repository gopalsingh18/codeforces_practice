#include <bits/stdc++.h>
using namespace std;

string intToBin(long long n) {
    string s="";
    for(int i=0; i<62;i++) {
        if (n%2==1)s+='1';
        else s+='0';
        n/=2;
    }
    reverse(s.begin(),s.end());
    return s;
}
long long binToInt(string s) {
    long long n = 0;
    long long powerOfTwo = 1;
    for(int i=s.size()-1;i>= 0;i--) {
        if(s[i]=='1') {
            n +=powerOfTwo;
        }
        powerOfTwo*= 2;
    }
    return n;
}

pair<long long, long long> func(long long x, long long y) {
    string sX = intToBin(x);
    string sY = intToBin(y);
    string sP1 = "", sQ1 = "";
    string sP2 = "", sQ2 = "";
    bool conflictFound = false;

    for (int i = 0; i < 62; i++) {
        if (!conflictFound) {
            if (sX[i] == '1' && sY[i] == '1') {
                conflictFound = true;
                sP1 += '1'; sQ1 += '0';
                sP2 += '0'; sQ2 += '1';
            } 
            else {
                sP1 += sX[i]; sQ1 += sY[i];
                sP2 += sX[i]; sQ2 += sY[i];
            }
        } 
        else {
            sP1 += '0'; sQ1 += '1';
            sP2 += '1'; sQ2 += '0';
        }
    }
    long long p1 = binToInt(sP1);
    long long q1 = binToInt(sQ1);
    
    long long p2 = binToInt(sP2);
    long long q2 = binToInt(sQ2);
    
    long long cost1 = abs(x - p1) + abs(y - q1);
    long long cost2 = abs(x - p2) + abs(y - q2);

    if (cost1 < cost2) return {p1, q1};
    else return {p2, q2};
}

void solve() {
    int x,y;
    cin>>x >>y;
    pair<int,int>output= func(x,y);
    cout<<output.first << " "<< output.second<<endl;
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