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
        int r,b,g;
        cin >> r >> b >> g;
        if(r == b && b == g){
            cout << r * 10 << nl;
            continue;
        }
        int mn = min({r,b,g});
        int ans = 0;
        ans += (mn * 10);
        ans += (r - mn) * 3;
        ans += (b - mn) * 3;
        ans += (g - mn) * 3;

        cout << ans << nl;

    }
    
    return 0;
}