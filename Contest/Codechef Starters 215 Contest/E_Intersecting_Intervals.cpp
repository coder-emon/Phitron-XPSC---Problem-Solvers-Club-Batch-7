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
        int n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> b(n);
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;

        //max subarray sum technique
        vector<ll> dp1(n);
        dp1[0] = a[0];
        for(int i = 1; i < n; i++){
            dp1[i] = max(dp1[i-1] + a[i], a[i]);
        }

        vector<ll> dp2(n);
        dp2[n-1] = a[n-1];
        for(int i = n-2; i >= 0; i--){
            dp2[i] = max(dp2[i+1] + a[i], a[i]);
        }

        vector<ll> dp3(n);
        dp3[0] = b[0];
        for(int i = 1; i < n; i++){
            dp3[i] = max(dp3[i-1] + b[i], b[i]);
        }

        vector<ll> dp4(n);
        dp4[n-1] = b[n-1];
        for(int i = n-2; i >= 0; i--){
            dp4[i] = max(dp4[i+1] + b[i], b[i]);
        }

        ll ans = -1e18;
        for(int i = 0; i < n; i++){
            ll sum_a = dp1[i] + dp2[i] - a[i];
            ll sum_b = dp3[i] + dp4[i] - b[i];
            ans = max(ans, sum_a + sum_b);
        }
        cout << ans << nl;
    }
    
    return 0;
}