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
        int h,x,y;
        cin >> h >> x >> y;

        float health = h - y;
        int cnt = 1;
        float res = ceil(health / x);
        cout << res + 1 << nl;
    }
    
    return 0;
}