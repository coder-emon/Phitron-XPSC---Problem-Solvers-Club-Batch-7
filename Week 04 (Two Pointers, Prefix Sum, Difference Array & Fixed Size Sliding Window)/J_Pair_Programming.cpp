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
        int k,n,m;
        cin >> k >> n >> m;
        vector<ll> a(n),b(m), ans;
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        int i = 0, j = 0;
        int lines = k;
        
        while(i < n || j < m){
            bool moved = false;

            if(i < n){
                if(a[i] == 0){
                    ans.push_back(0);
                    moved = true;
                    lines++;
                    i++;
                }
                else if(a[i] <= lines){
                    ans.push_back(a[i]);
                    moved = true;
                    i++;
                }
            }

            if(!moved && j < m){
                if(b[j] == 0){
                    ans.push_back(0);
                    moved = true;
                    lines++;
                    j++;
                }
                else if(b[j] <= lines){
                    ans.push_back(b[j]);
                    moved = true;
                    j++;
                }
            }

            if(!moved){
                ans.clear();
                break;
            }
        }

        if(ans.size() == 0)
            cout << -1 << nl;
        else{
            for(auto x : ans) cout << x << " ";
            cout << nl;
        }
    }
    
    return 0;
}