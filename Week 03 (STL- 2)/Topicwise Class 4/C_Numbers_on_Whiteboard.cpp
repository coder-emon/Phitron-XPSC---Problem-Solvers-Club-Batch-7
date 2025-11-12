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
        int x = n;
        cout << 2 << nl;
        for(int i = n - 1; i >= 1; i--){
            cout << i << " " << x << nl;
            x = ceil((x + i) / 2.0 );
        }
    }
    
    return 0;
}