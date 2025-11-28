#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<ll> a(n);
        bool hasKnown = false;

        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i] != -1) hasKnown = true;
        }

        // Case: everything -1 → fill with 0
        if(!hasKnown){
            cout << 0 << nl;
            for(int i=0;i<n;i++) cout << 0 << " ";
            cout << nl;
            continue;
        }

        // Step 1: propagate known values forward for lexicographically smallest
        ll last = -1;
        for(int i=0;i<n;i++){
            if(a[i] == -1){
                if(last != -1) a[i] = last;
            }else{
                last = a[i];
            }
        }

        // Step 2: propagate backwards to fill remaining -1
        last = -1;
        for(int i=n-1;i>=0;i--){
            if(a[i] == -1){
                if(last != -1) a[i] = last;
            }else{
                last = a[i];
            }
        }

        // Step 3: minimize |a[n] - a[1]|
        if(a[0] != a[n-1]){
            ll mn = min(a[0], a[n-1]);
            ll mx = max(a[0], a[n-1]);
            // choose lexicographically smallest (make both equal to smaller)
            if(a[0] == mx){
                for(int i=0;i<n;i++) a[i] = mn;
            } else {
                for(int i=0;i<n;i++) a[i] = mn;
            }
        }

        ll ans = llabs(a[n-1] - a[0]);

        cout << ans << nl;
        for(auto x : a) cout << x << " ";
        cout << nl;
    }

    
    return 0;
}