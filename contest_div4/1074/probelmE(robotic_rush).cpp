#include <bits/stdc++.h>
using namespace std;

bool ispossible(int a,vector<int>&spike){
    int n=spike.size();
    for(int i=0;i<n;i++){
        if(spike[i]==a) return true;
    }
    return false;
}

vector<int> func(vector<int>&robot,vector<int>&spike,string s){
    int n=robot.size();
    int m=s.size();
    vector<int>ans(m,n);
    int count=n;
    for(int i=0;i<m;i++){
        char c=s[i];
        if(c=='L'){
            for(int i=0;i<n;i++){
                robot[i]=robot[i]-1;
                if(ispossible(robot[i],spike)){
                    count--;
                }
            }
            ans[i]=max(count,0);
        }
        else{
            for(int i=0;i<n;i++){
                robot[i]=robot[i]+1;
                if(ispossible(robot[i],spike)){
                    count--;
                }
            }
            ans[i]=max(count,0);
        }
    }
    return ans;
}

void solve() {
    int n,m,k;
    cin>>n;
    cin>>m;
    cin>>k;
    vector<int>robot;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        robot.push_back(x);
    }
    vector<int>spike;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        spike.push_back(x);
    }
    string s;
    cin>>s;
    vector<int>output= func(robot,spike,s);
    int z=output.size();
    for(int i=0;i<z;i++){
        cout<<output[i]<<" ";
    }
    cout<<endl;
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