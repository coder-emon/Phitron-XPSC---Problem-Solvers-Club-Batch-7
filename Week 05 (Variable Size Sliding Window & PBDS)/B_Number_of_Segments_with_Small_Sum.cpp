#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    for(auto &x : a) cin >> x;

    ll l = 0, r = 0, ans = 0;
    ll sum = 0;
    while(r < n){
        sum += a[r];
        if(sum <= k){
            ans += r - l + 1;
        }else{
            while(sum > k && l <= r){
                sum -= a[l];
                l++;
            }
            if(sum <= k){
                ans += r - l + 1;
            }
        }
        r++;
    }
    cout << ans << nl;
    
    return 0;
}