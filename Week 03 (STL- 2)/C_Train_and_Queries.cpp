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
        int n, q;
        cin >> n >> q;
        map<int, set<int>> mp;
        for(int i = 1; i <= n; i++){
            ll x;
            cin >> x;
            mp[x].insert(i);
            
        }

        while(q--){
            ll a,b;
            cin >> a >> b;

            if(mp.find(a) == mp.end() || mp.find(b) == mp.end()){
                cout << "NO" << nl;
            }else{
                int lMostIdx,rMostIdx;
                lMostIdx = *mp[a].begin();
                rMostIdx = *mp[b].rbegin();
                if(lMostIdx < rMostIdx){
                    cout << "YES" << nl;
                }else{
                    cout << "NO" << nl;
                }
            }

        }
    }
    
    return 0;
}