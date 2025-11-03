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
        for(ll i = 0; i < n; i++){
            cin >> a[i];
        }

        ll pos = -1;
        bool flag = false;
        for(ll i = 0; i < n; i++){
            for(ll j = 2; j <= 1000; j++){
                if(__gcd(j, a[i]) == 1){
                    pos = j;
                    flag = true;
                    break;
                }
            }
            if(flag)
                break;
        }

        cout << pos << nl;
    }
    
    return 0;
}