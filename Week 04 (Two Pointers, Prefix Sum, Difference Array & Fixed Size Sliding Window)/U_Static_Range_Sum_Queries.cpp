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
    vector<ll> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    vector<ll> prefix_sum(n);
    prefix_sum[0] = v[0];

    for(int i = 1; i < n; i++){
        prefix_sum[i] = prefix_sum[i-1] + v[i];
    }

    while(q--){
        int l,r;
        cin >> l >> r;
        l--,r--;        //convert 0 based index
        ll res;
        if(l == 0)
            res = prefix_sum[r];
        else
            res = prefix_sum[r] - prefix_sum[l-1];
        
        cout << res << nl;
    }

    
    return 0;
}