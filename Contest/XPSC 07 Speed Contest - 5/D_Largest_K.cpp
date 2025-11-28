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
        ll x,y;
        cin >> x >> y;
        ll ans = y / (x-1);
        cout << ans << nl;
    }
    
    return 0;
}