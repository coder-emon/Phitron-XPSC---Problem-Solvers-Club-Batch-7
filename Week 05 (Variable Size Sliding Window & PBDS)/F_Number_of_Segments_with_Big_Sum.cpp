#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,s;
    cin >> n >> s;
    vector<ll> a(n);
    for(auto &x : a) cin >> x;
    ll l = 0, r = 0;
    ll ans = 0, sum = 0;
    while(r < n){
        sum += a[r];
        if(sum >= s){
            ans +=  n-r;

            while(sum >= s && l <= r){
                sum -= a[l];
                l++;

                if(sum >= s){
                    ans += n-r;
                }
            }
            
        }
        r++;
    }
    
    cout << ans << nl;
    return 0;
}