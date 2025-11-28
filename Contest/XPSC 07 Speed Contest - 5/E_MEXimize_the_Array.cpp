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
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(auto &x : a) cin >> x;
        sort(a.begin(),a.end());
        ll ops = 0;
        for(ll i = 0; i < n; i++){
            if(a[i] != i){
                ops += abs(a[i] -i);
            }
        }
        cout << ops << nl;
    }
    
    return 0;
}