#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b) {
    if (a.first == b.first)
        return a.second < b.second;
    return a.first > b.first;
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
            int x = __gcd(i, n);
            v.push_back({x,i});
        }
        sort(v.begin(),v.end(),cmp);

        for(auto p : v){
            cout << p.second << " ";
        }
        cout << nl;

    }
    
    return 0;
}