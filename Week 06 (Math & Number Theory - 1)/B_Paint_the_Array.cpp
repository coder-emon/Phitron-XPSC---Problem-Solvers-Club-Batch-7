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
        for(auto &x : a) cin >> x;
        ll G1 = 0, G2 = 0;
        for(int i = 0; i < n; i+= 2){
            G1 = __gcd(G1,a[i]);
        }
        for(int i = 1; i < n; i+= 2){
            G2 = __gcd(G2,a[i]);
        }
        bool ok = true;
        for(int i = 0; i < n; i+=2){
            if(a[i] % G1 == 0)
                ok = false;
        }
        ll ans = 
        if
    }
    
    return 0;
}