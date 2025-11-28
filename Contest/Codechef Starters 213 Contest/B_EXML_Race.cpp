#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

bool cmp(pair<int,int> &a, pair<int,int> &b){
    if(a.first != b.first)
        return a.first > b.first;  
    return a.second < b.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while(tc--){
        int n; 
        cin >> n;
        vector<pair<int,int>> v;
        for(int i = 1; i <= n; i++){
            int d,t;
            cin >> d >> t;
            int s = d / t;
            v.push_back({s,i});
        }
        sort(v.begin(),v.end(),cmp);
        
        cout << v[0].second << nl;
    }
    
    return 0;
}