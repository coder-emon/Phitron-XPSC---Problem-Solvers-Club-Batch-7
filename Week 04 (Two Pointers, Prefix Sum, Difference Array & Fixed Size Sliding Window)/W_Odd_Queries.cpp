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
        int n,q;
        cin >> n >> q;
        vector<ll> arr(n+2,0), prerixSum(n+2,0);
        for(int i = 1; i <= n; i++) cin >> arr[i];
        for(int i = 1; i <= n; i++){
            prerixSum[i] = prerixSum[i-1] + arr[i];
        }

        while(q--){
            ll l,r,k;
            cin >> l >> r >> k;
            ll add = (r - l + 1) * k;
            ll remove;
            if(l == 1)
                remove = prerixSum[r];
            else
                remove = prerixSum[r] - prerixSum[l-1];

            ll res = prerixSum[n] + add - remove;
            if(res % 2 == 0)
                cout << "NO" << nl;
            else
                cout << "YES" << nl;
        }
    }
    
    return 0;
}