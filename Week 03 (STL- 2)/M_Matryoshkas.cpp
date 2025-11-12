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
        map<int,int> mp,mp2;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            mp[x]++;
        }

        int ans = 1;
        for(auto x : mp)
            if(x.second > 1) ans++;
        
        cout << ans << nl;
    }
    
    return 0;
}