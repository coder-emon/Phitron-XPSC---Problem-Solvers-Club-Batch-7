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
        if(n % 2 == 0){
            int res = (n / 4) + 1;
            cout << res << nl;
        }else{
            cout << 0 << nl;
        }
    }
    
    return 0;
}