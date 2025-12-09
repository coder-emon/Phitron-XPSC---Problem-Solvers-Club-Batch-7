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
    
    map<int,int> freq;
    ll l = 0, r = 0;
    ll ans = 0;
    while(r < n){
        freq[a[r]]++;
        while(freq.size() > k && l <= r){
                freq[a[l]]--;
                if(freq[a[l]] == 0)
                    freq.erase(a[l]);
                l++;
        }

        ans += r-l+1;
        r++;
    }
    cout << ans << nl;

    return 0;
}