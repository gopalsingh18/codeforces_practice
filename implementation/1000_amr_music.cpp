#include <bits/stdc++.h>
using namespace std;

vector<int>func(int k,vector<int>& days){
    int n=days.size();
    vector<pair<int,int>>temp;
    vector<int>output;
    for(int i=0;i<n;i++){
        temp.push_back({days[i],i+1});
    }
    sort(temp.begin(),temp.end());
    int cnt=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(cnt+temp[i].first<=k){
            cnt+=temp[i].first;
            ans++;
            output.push_back(temp[i].second);
        }
    }
    output.push_back(ans);
    return output;
}

void solve() {
    int n,k;
    cin>>n >>k;
    vector<int>day;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        day.push_back(m);
    }
    vector<int>output= func(k,day);
    int cnt=output.back();
    output.pop_back();
    cout<< cnt<< endl;
    for(int i=0;i<cnt;i++){
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

    solve();
    return 0;
}