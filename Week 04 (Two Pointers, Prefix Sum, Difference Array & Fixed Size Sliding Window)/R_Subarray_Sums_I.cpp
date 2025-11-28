#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x;
    cin >> n >> x;
    map<ll,ll> fre;
    fre[0] = 1;
    ll prefix_sum = 0;
    ll ans = 0;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        prefix_sum += num;
        ans += fre[prefix_sum - x];  // count all occurrences
        fre[prefix_sum]++;
    }
    cout << ans << nl;

    //Soltuion 2 direct from prefix sum calculation
    // int n,x;
    // cin >> n >> x;
    // map<ll,ll> fre;
    // fre[0] = 1;
    // vector<ll> v(n);
    // for(int i = 0; i < n; i++) cin >> v[i];

    // vector<ll> prefix_sum(n);
    // prefix_sum[0] = v[0];
    
    // for(int i = 1; i < n; i++){
    //     prefix_sum[i] = prefix_sum[i-1] + v[i];
    // }
    
    // int ans = 0;
    // for(int i = 0; i < n; i++){
    //     ans += fre[prefix_sum[i] - x];  // count all occurrences
    //     fre[prefix_sum[i]]++;
    // }

    // cout << ans << nl;
    return 0;
}