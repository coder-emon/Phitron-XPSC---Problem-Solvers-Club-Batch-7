#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        map<string,ll> mp;
        for(int i = 0; i < n; i++){
            string s;
            cin >> s;
            mp[s]++;
        }

        vector<string> a;
        for(auto [x,y] : mp){
            a.push_back(x);
        }

        ll ans = 0;
        for(int i = 0; i < a.size() -1; i++){
            for(int j = i+1; j < a.size(); j++){
                if((a[i][0] == a[j][0] && a[i][1] != a[j][1]) || (a[i][0] != a[j][0] && a[i][1] == a[j][1])){
                    ans += mp[a[i]] * mp[a[j]];
                }
            }
        }

        cout << ans << nl;
    }
    
    return 0;
}