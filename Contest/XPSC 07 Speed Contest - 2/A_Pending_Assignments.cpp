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
        ll x,y,z;
        cin >> x >> y >> z;
        if(x * y <= z * 24 * 60)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
    
    return 0;
}