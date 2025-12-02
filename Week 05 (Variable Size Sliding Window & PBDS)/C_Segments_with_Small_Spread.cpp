#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    for(auto &x : a) cin >> x;

    multiset<ll> ms;
    int l = 0, r =0;
    ll ans = 0;
    while(r < n){
        ms.insert(a[r]);
        ll mn,mx;
        mn = *ms.begin();
        mx = *ms.rbegin();

        if(mx - mn <= k){
            ans+= r - l + 1;
        }else{
            while(l <= r){
                mn = *ms.begin();
                mx = *ms.rbegin();
                if(mx - mn <= k) break;
                ms.erase(ms.find(a[l]));
                l++;
            }
            mn = *ms.begin();
            mx = *ms.rbegin();
            if(mx - mn <= k){
                ans+= r - l + 1;
            }
        }
        r++;
    }

    cout << ans << nl;

    return 0;
}