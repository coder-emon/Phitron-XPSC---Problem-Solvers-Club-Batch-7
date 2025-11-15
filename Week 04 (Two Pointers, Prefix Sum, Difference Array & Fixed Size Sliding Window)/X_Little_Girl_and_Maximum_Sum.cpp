#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q;
    cin >> n >> q;
    vector<int> a(n);
    vector<int> d(n+2,0);
    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 1; i <= q; i++){
        int l,r;
        cin >> l >> r;
        l--, r--;
        d[l]++;
        d[r+1]--;
    }

    for(int i = 1; i < n; i++){
        d[i] += d[i-1];
    }
    sort(a.rbegin(), a.rend());
    sort(d.rbegin(), d.rend());
    ll ans = 0;
    for(int i = 0; i < n; i++){
        ans += (1LL * d[i]*a[i]);
    }  
    cout << ans;  
    return 0;
}